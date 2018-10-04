#include <stdio.h>

float area(float a, float b){
    return a * b;
}

float perimeter(float a, float b){
    return (a+b)*2.0;
}


int main(int argc, char const *argv[])
{

    float higth, width;
    printf("What is the Width of the Rectangle?\n");
    scanf("%f", &width);

    printf("What is the Higth of the Rectangle?\n");
    scanf("%f", &higth);

    printf("With a higth of %f and a width of %f\nIt will have a area of %f\nand a perimeter of %f\n", higth, width, area(width, higth), perimeter(width, higth));

    return 0;
}


/*  
    int number = 99;
    int sci = 1.7e+4;
    double small = 9.34397420935703498157000e-5;
    _Bool boolean = 1;

    enum gender {male, female};
    enum gender myGender = male;
    _Bool isMale = (myGender == 0);

    printf("%d\n", number);
    if (isMale){
        printf("The user is male\n");
    }else {
        printf("The user is female\n");
    }
    printf("%f\n", sci);
    printf("%f\n", small);
    printf("%d\n", boolean);
*/