#include <stdio.h>

void oppgave1();
void oppgave2();
void oppgave3();

int main(int argc, char const *argv[]){
    //oppgave1();
    //oppgave2();
    oppgave3();
    return 0;
}

/*   
Exercise 1:
    Expected time on the problem: 10 min
    Take the following code, what would you expect the answers would be? 
    Why do youthink they are the way they are?
*/
void oppgave1(){
    int *pInt;
    char *pChar;
    short *pShort;
    double *pDouble;
    float *pFloat;
    
    printf("The size of pointers are %lu, %lu, %lu, %lu, %lu respectively \n",
        sizeof(pInt), sizeof(pChar), sizeof(pShort), sizeof(pDouble), sizeof(pFloat));
    
    printf("The size of variables are %lu, %lu, %lu, %lu, %lu respectively \n",
        sizeof(*pInt), sizeof(*pChar), sizeof(*pShort), sizeof(*pDouble), sizeof(pFloat));
}


/*
Exercise 2:
Expected time on the problem: 10 min
Normal usage of scanf is the following:
int a,b;
printf("Type two integers seperated with space\n");scanf("%d %d", &a, &b);
printf("The numbers are %d, %d \n", a,b);

Write a program where you use scanf to read integers from the terminal, 
butwithout using '&' in the scanf call. It should look more like this :
scanf("%d %d", p, q);
Also print the larger of the two.
*/
void oppgave2(){
    int a,b;
    int *p,*q;
    p = &a;
    q = &b;
    
    printf("Type two integers seperated with space\n");
    scanf("%d %d", p, q);

    (p < q) ? 
        printf("%d is greater then %d \n", *p,*q) : 
        printf("%d is greater then %d \n", *q, *p);
}


/*
Exercise 3:
Expected time on the problem: 40 min

Write a small program that does bubble sort on an array of positive integers. 
Theintegers or the number of them is unknown. Use realloc to reallocate memoryThey are 
typed through terminal.  Input should stop when you enter '0' andthen sorting should start. 
valueping should be done by function call-  value(a,b).The output should print :

- The number of input integers- 0 should not be counted as part of the integers list- 
The sorted list of integersHints :
int i;
while(1){
    scanf("%d", &i);
} 
//Will give you input to i 
- but watch out for infinte loop.Bubble sort:Run through the elements and value when you find 
a[i-1] < a[i]. Keep doingthis until you cannot swap anymore.
*/
void oppgave3(){
    int i, j;
    int array[7] = {57, 23, 124, 67, 90, 78, 32};
    int array_size = sizeof(array)/sizeof(int);

    for (i = 0 ; i < array_size - 1; i++){
        for (j = 0 ; j < array_size - i - 1; j++){
            if (array[i] > array[j]){
                int value = array[i];
                array[i] = array[j];
                array[j] = value;
            }
        }
    }

    printf("Sorted list in ascending order:\n");
    for (int c = 0; c < array_size - 1; c++)
        printf("%d\n", array[c]);
}



/*
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
*/