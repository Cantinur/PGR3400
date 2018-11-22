#include <stdio.h>
#include <stdlib.h>

typedef int (*PFI)(int);

int identity(int a){
    return a;
}

int square(int a){
    return a*a;
}

int cube(int a){
    return a*a*a;
}

int fourth(int a){
    return a*a*a*a;
}

PFI power[] = {identity, square, cube, fourth};

int main(void){
    int result, exponent = 0, value = 0;

    do{
        printf("Enter a number to select a function: \n");
        printf("[1] identity\n[2] square\n[3] cube\n[4] fourth\n");
        scanf("%d", &exponent);

        if(exponent > 0 && exponent <= sizeof(power)/sizeof(PFI)){
            printf("Enter a value: ");
            scanf("%d", &value);
            result = power[exponent-1](value);
            printf("The result is %d\n", result);
        }else{
            printf("Please type again, but this time take a number between 1 and 4\n");
            exponent = 0;
        }
    }while(!exponent);

    return 0;
}
