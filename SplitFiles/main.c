#include "parse.h"
#include <string.h>

int main(int argc, char* argv[])
{
    char* fileName = "mickey";
    int max = 6; //= (strncmp(fileName, "mickey", 6)) ? 6 : 15;
    
    setSaveFile();

    for(int y = 0; y < max; y++){
        setFile(fileName, y);
        print();
    }
    
    return 0;
}