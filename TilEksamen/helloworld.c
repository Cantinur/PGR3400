#include <stdio.h>

int main(int argc, char *argv[]){

    int *p = NULL, *q = NULL, a= 10, b = 25;
    p = &a;
    q = &b;

    printf("P: %d Q: %d A: %d B: %d\n", *p, *q, a, b);
    *q = 15;
    printf("P: %d Q: %d A: %d B: %d\n", *p, *q, a, b);

    q = p;
    printf("P: %d Q: %d A: %d B: %d\n", *p, *q, a, b);
    
    p = &b;
    printf("P: %d Q: %d A: %d B: %d\n", *p, *q, a, b);
    printf("P: %u Q: %u A: %u B: %u\n", p, q, &a, &b);



    // printf("Hello, world!\n");
    return 0;
}