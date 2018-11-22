#include <stdio.h>

typedef struct
{
    int age;
    float weight;
} person;

int main(void)
{
    person *personPtr, person1;
    personPtr = &person1;

    printf("Enter a age: ");
    scanf("%d", &personPtr->age);

    printf("Enter a weight: ");
    scanf("%f", &personPtr->weight);

    printf("This person is %d years old and weight about %f\n", person1.age, person1.weight);

    return 0;
}
