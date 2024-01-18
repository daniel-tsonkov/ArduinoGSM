#include <SD_MMC.h>
#include <TAMC_GT911.h>
#include <Wire.h>
#include <Audio.h>


#define I2S_DOUT 19
#define I2S_BCLK 20
#define I2S_LRC 2

// microSD card
#define PIN_SD_CMD 11
#define PIN_SD_CLK 12
#define PIN_SD_D0 13


struct Music_info
{
    String name;
    int length;
    int runtime;
    int volume;
    int status;
    int mute_volume;
} music_info = {"", 0, 0, 0, 0, 0};

Audio audio;

String music_list[20];
int music_num = 0;
int music_index = 0;

//---- Main --------------------------------------------------

void setup()
{
    Serial.begin(115200);

    sd_init();
    audio_init();

    open_new_song(music_list[music_index]);

    xTaskCreatePinnedToCore(Task_Audio, "Task_Audio", 10240, NULL, 3, NULL, ARDUINO_RUNNING_CORE);
}

void loop()
{
}

void Task_Audio(void *pvParameters) // This is a task.
{
    while (1)
        audio.loop();
}

//---- Device init --------------------------------------------------

void sd_init()
{
    SD_MMC.setPins(PIN_SD_CLK, PIN_SD_CMD, PIN_SD_D0);
    if (!SD_MMC.begin("/sdcard", true, true))
    {
        Serial.println("Card Mount Failed");
        return;
    }
}

void audio_init()
{
    // Read SD
    music_num = get_music_list(SD_MMC, "/", 0, music_list);
    Serial.print("Music file count:");
    Serial.println(music_num);
    Serial.println("All music:");
    for (int i = 0; i < music_num; i++)
    {
        Serial.println(music_list[i]);
    }

    audio.setPinout(I2S_BCLK, I2S_LRC, I2S_DOUT);
    audio.setVolume(21); // 0...21
}

//----- Audio Function --------------------------------------------------

int get_music_list(fs::FS &fs, const char *dirname, uint8_t levels, String wavlist[30])
{
    Serial.printf("Listing directory: %s\n", dirname);
    int i = 0;

    File root = fs.open(dirname);
    if (!root)
    {
        Serial.println("Failed to open directory");
        return i;
    }
    if (!root.isDirectory())
    {
        Serial.println("Not a directory");
        return i;
    }

    File file = root.openNextFile();
    while (file)
    {
        if (file.isDirectory())
        {
        }
        else
        {
            String temp = file.name();
            if (temp.endsWith(".wav"))
            {
                wavlist[i] = temp;
                i++;
            }
            else if (temp.endsWith(".mp3"))
            {
                wavlist[i] = temp;
                i++;
            }
        }
        file = root.openNextFile();
    }
    return i;
}

void open_new_song(String filename)
{
    // 去掉文件名的根目录"/"和文件后缀".mp3",".wav"
    music_info.name = filename.substring(1, filename.indexOf("."));
    audio.connecttoFS(SD_MMC, filename.c_str());
    music_info.runtime = audio.getAudioCurrentTime();
    music_info.length = audio.getAudioFileDuration();
    music_info.volume = audio.getVolume();
    music_info.status = 1;
    Serial.println("**********start a new sound************");
}

void audio_eof_mp3(const char *info)
{ // end of file
    Serial.print("eof_mp3     ");
    Serial.println(info);

    music_index++;
    if (music_index >= music_num)
    {
        music_index = 0;
    }
    open_new_song(music_list[music_index]);
}