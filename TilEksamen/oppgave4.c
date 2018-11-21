#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int array[] = {1,2,3,4,5};
    int *pArray = malloc(5/sizeof(int));
    
    for(int i = 0; i < 5; i++)
        pArray[i] = i+1;

    for(int i = 0; i < 5; i++)
        printf("Arrray: %d\n", array[i]);
    printf("\n");
    
    for(int i = 0; i < 5; i++)
        printf("Pointer: %d\n", pArray[i]);
    printf("\n");
    
    array[2] = 5;
    pArray[3] = 5;

    for(int i = 0; i < 5; i++)
        printf("Arrray: %d\n", array[i]);
    printf("\n");

    for(int i = 0; i < 5; i++)
        printf("Pointer: %d\n", pArray[i]);
    printf("\n");

    return 0;
}
