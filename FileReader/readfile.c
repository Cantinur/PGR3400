#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   FILE *fptr;
   char line[21];

    fptr = fopen("file.txt","r");

    if (fptr != NULL)
        while (fgets(line, 10*sizeof(char), fptr) != NULL)
            printf("%s", line);
    else 
        printf("Error! opening file");
    
    printf("\n");
    fclose(fptr); 
    return 0;
}