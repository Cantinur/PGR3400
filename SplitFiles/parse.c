#include "parse.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static FILE *files[3], *saveFile;
static char* filePath, fileName[20], left[30], middel[30], rigth[30];

int initiateFile()
{
    printf("Let's recreat some ASCII-Art!\nChoose from one of two options.\n");
    char str[20];
    printf("Type mickey or wolf\n");
    scanf("%s", str);

    if (strncmp(str, "mickey", 6) == 0 || strncmp(str, "wolf", 6) == 0){
        strcpy(fileName, str);
        return (strncmp(fileName, "mickey", 6) == 0) ? 2 : 5;
    }else {
        printf("Hummmm... Looks like somthing went wrong.\nCoud you try one more time?\n");
        return initiateFile();
    }
}

void setFile(int y)
{
    filePath = (char*) calloc(50, sizeof(char));
    
    for(int i = 0; i < 3; i++){
        sprintf(filePath, "./%s/part_%d_%d_%s.txt", fileName, i, y, fileName);
        files[i] = fopen(filePath, "r");
    }

    free(filePath);
}

void setSaveFile()
{
    char name[20];
    sprintf(name, "%s.txt", fileName);
    saveFile = fopen(name, "w");
}

void printToFile()
{
    for (int i = 0; i < 30; i++)
    {
        for(int j = 0; j < 30; j++)
        {
            fscanf(files[0], "%c", &left[j]);
            fscanf(files[1], "%c", &middel[j]);
            fscanf(files[2], "%c", &rigth[j]);
        }
        fprintf(saveFile, "%s%s%s\n", left, middel, rigth);
    }

    for(int i = 0; i < 3; i++)
    {
        fclose(files[i]);
    }
}


void closeSave()
{
    fclose(saveFile);
}