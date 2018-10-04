#include <stdio.h>
#include <stddef.h>

int main(int argc, char const *argv[])
{
    long number1 = 0L;
    long number2 = 0L;
    long *pNumber = NULL;

    pNumber = &number1;
    *pNumber = 2L;
    ++number2;
    number2 += *pNumber;
    pNumber = &number2;
    ++*pNumber;
    

    printf("Number 1: %ld\nNumber 2: %ld\n*PNUmber: %ld\n", number1, number2, *pNumber);
    printf("And adding Number 2 with PNumber gives us: %ld\n", *pNumber + number2);


    return 0;
}
