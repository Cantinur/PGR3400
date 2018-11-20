#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *f = NULL;
    printf("Let's read a file\n");

    if(argc == 2)
        f = fopen(argv[1], "r");
    else 
        printf("Did not get file\n");
    
    char szLine[80] = {'\0'};
    while (fgets (szLine, 5, f) != NULL)
    {
        fscanf(f,"%s", szLine);
        printf("%s \n", szLine);
    }

    fclose(f);
    return 0;
}