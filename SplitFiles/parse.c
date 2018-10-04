#include "parse.h"
#include <stdio.h>
#include <stdlib.h>
/*
With this assignment you will find to folders with multiple .txt-files. These contain 
files named “part_x_y_name.txt” these are 30x30 character parts of ASCII-drawings. That 
is, the asci-art is split into 30 by 30 squares of characters, and need to be puzzled 
together. After each line you will need to add a newline character.

Make a C-program that reads and merges these prats into one file where the image 
looks right.

Reading and merging should happen in a c-file separate from the main function. 
The main function should parse parameters and call the separate merging system.
*/

static FILE *files[3], *saveFile;
char *left, *middel, *rigth, *filePath;

void setFile(char* fileName, int y)
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
    saveFile = fopen("draw.txt", "w");
}

void print()
{
    for (int i = 0; i <= 30; i++){
        for(int j = 0; j <= 30; j++){

            fscanf(files[0], "%c", left);
            fscanf(files[1], "%c", middel);
            fscanf(files[2], "%c", rigth);
        }
        fprintf(saveFile, "%s%s%s\n", left, middel, rigth);
    }

    for(int i = 0; i < 3; i++){
        fclose(files[i]);
    }
}

