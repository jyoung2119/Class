#include <stdio.h>
#include <stdlib.h>

int compressBoi();

int main()
{
    printf("Compressing File...\n");
    int compressRet = compressBoi();

    if(compressRet = 1)
    {
        printf("File Compression Successful!\n");
    }
    else
    {
        printf("File Compression Failed :(\n");
    }
}

int compressBoi()
{
    FILE *pFile;
    FILE *wFile;
    char fileChar = 0;
    double byteCount = 0;
    double comByteCount = 0;
    int i = 0;
    char song[1383] = {0};
    char *tempSong = song;

    pFile = fopen("./stsLyrics.txt", "r");
    wFile = fopen("./lyricsComp.txt", "w");

    if(pFile)
    {
        if(!wFile)
        {
            printf("ERROR OPENING lyricsComp.txt\n");
            return 0;
        }

        while(tempSong)
        {
            tempSong = fgets(song, 1383, pFile);
            
            if(tempSong)
            {
                fputs(song, wFile);
            }   
        }
        printf("Original File Size = %.2lfkB\n", byteCount/1000);
        printf("Compressed File Size = %.2lfkB\n", comByteCount/1000);
        fclose(pFile);
        fclose(wFile);
    }
    else
    {
        printf("ERROR OPENING stsLyrics.txt\n");
        fclose(wFile);
        return 0;
    }

    return 1;
}