#include "parse.h"

int main(void)
{
    int max = initiateFile();

    setSaveFile();

    for(int y = 0; y < max; y++){
        setFile(y);
        printToFile();
    }

    return 0;
}