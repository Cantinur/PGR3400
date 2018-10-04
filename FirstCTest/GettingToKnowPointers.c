/*
Excersise 1:
Write a program in C to show the basic declaration of pointer.
Expected Output :

 Pointer : Show the basic declaration of pointer :
-------------------------------------------------------
 Here is m=10, n and o are two integer variable and *z is an integer
 z stores the address of m  = 0x7ffd40630d44

 *z stores the value of m = 10

 &m is the address of m = 0x7ffd40630d44

 &n stores the address of n = 0x7ffd40630d48

 &o  stores the address of o = 0x7ffd40630d4c

&z stores the address of z = 0x7ffd40630d50
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void oppgave1();
void oppgave2();
void oppgave3();
void oppgave4();
void oppgave5();
void oppgave6();
void oppgave7();
void oppgave8();
void oppgave9();
void oppgave11();
void oppgave10();
void oppgave12();
void oppgave13();
void oppgave14();
void oppgaev15();
void oppgave16();
void oppgave17();
void oppgave18();
void oppgave19();
void oppgave20();
void oppgave21();
void oppgave22();

int main(int argc, char *argv[]){
    //oppgave1();
    //oppgave2();
    //oppgave3();
    //oppgave4();
    //oppgave5();
    //oppgave6();
    //oppgave7();
    //oppgave8();
    //oppgave9();
    //oppgave10();
    //oppgave11();
    //oppgave12();
    //oppgave13(); 
    //oppgave14();
    //oppgaev15();
    //oppgave16();
    //oppgave17();
    //oppgave18();
    return 0;
}

void oppgave1(){
    int m = 10;
    int *z = &m;
    int n = 3;
    int o = 24;
    printf("z stores the address of m  = %p\n", z);
    printf("*z stores the value of m  = %d\n", *z);
    printf("&m is the address of m  = %p\n", &m);
    printf("&n is the address of n  = %p\n", &n);
    printf("&o is the address of o  = %p\n", &o);
    printf("&z stores the address of m  = %p\n", &z);
    printf("\n\n\n");
}


/*
2. Write a program in C to demonstrate how to handle the 
pointers in the program.
Expected Output :

Address of m : 0x7ffcc3ad291c
Value of m : 29

Now ab is assigned with the address of m.
Address of pointer ab : 0x7ffcc3ad291c
Content of pointer ab : 29

The value of m assigned to 34 now.
Address of pointer ab : 0x7ffcc3ad291c
Content of pointer ab : 34

The pointer variable ab is assigned with the value 7 now.
Address of m : 0x7ffcc3ad291c
Value of m : 7
*/

void oppgave2(){
    int m = 29;
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n\n", m);
    
    int *ab = &m;
    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n\n", *ab);

    m = 34;
    printf("The value of m assigned to 34 now.\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n\n", *ab);
    
    for (m = 1; m < 11; m++){
        printf("Content of pointer ab : %d\n", *ab);
    }

    printf("At the end of the loop. Content of pointer ab : %d\n\n", *ab);
    

    *ab = 7;
    printf("The pointer variable ab is assigned with the value 7 now.\n");
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n\n", m);
    printf("\n\n\n");
}

/*
3. Write a program in C to demonstrate the use of &(address of) and 
*(value at address) operator.

Expected Output :
Pointer : Demonstrate the use of & and * operator :
--------------------------------------------------------
 m = 300
 fx = 300.600006
 cht = z

 Using & operator :
-----------------------
 address of m = 0x7ffda2eeeec8
 address of fx = 0x7ffda2eeeecc
 address of cht = 0x7ffda2eeeec7

 Using & and * operator :
-----------------------------
 value at address of m = 300
 value at address of fx = 300.600006
 value at address of cht = z

Using only pointer variable :
----------------------------------
 address of m = 0x7ffda2eeeec8
 address of fx = 0x7ffda2eeeecc
 address of cht = 0x7ffda2eeeec7

 Using only pointer operator :
----------------------------------
 value at address of m = 300
 value at address of fx= 300.600006
 value at address of cht= z
*/
void oppgave3(){
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    int *pInt = &m;
    float *pFloat = &fx;
    char *pChar = &cht;

    printf("Using & operator :\n");
    printf("-----------------------\n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n", &cht);
    printf("\n");

    printf("Using & and * operator :\n");
    printf("-----------------------------\n");
    printf("value at address of m = %d\n", m);
    printf("value at address of fx = %f\n", fx);
    printf("value at address of cht = %c\n", cht);
    printf("\n");

    printf("Using only pointer variable :\n");
    printf("-----------------------------\n");
    printf("address of m = %p\n", pInt);
    printf("address of fx = %p\n", pFloat);
    printf("address of cht = %p\n", pChar);
    printf("\n");


    printf("Using only pointer operator :\n");
    printf("----------------------------------\n");
    printf("value at address of m = %d\n", *pInt);
    printf("value at address of fx = %f\n", *pFloat);
    printf("value at address of cht = %c\n", *pChar);
    printf("\n\n\n");
}

/*
4. Write a program in C to add two numbers using pointers.

Test Data : 
Input the first number : 5 
Input the second number : 6 
Expected Output :

The sum of the entered numbers is : 11 
*/
void oppgave4(){
    int a,b;
    int *pA = &a;
    int *pB = &b;
    printf("Input the first number : ");
    scanf("%d", pA);

    printf("Input the second number : ");
    scanf("%d", pB);

    printf("The sum of the entered numbers is : %d\n\n", (*pA + *pB));
}

/*
5. Write a program in C to add numbers using call by reference.

Test Data : 
Input the first number : 5 
Input the second number : 6 
Expected Output :

The sum of 5 and 6  is 11 */
void oppgave5(){
    int a,b;
    printf("Input the first number : ");
    scanf("%d", &a);

    printf("Input the second number : ");
    scanf("%d", &b);

    printf("The sum of the entered numbers is : %d\n\n", (a + b));
}

/*
6. Write a program in C to find the maximum number between two 
numbers using a pointer.

Test Data : 
Input the first number : 5 
Input the second number : 6 
Expected Output :

6 is the maximum number. */
void oppgave6(){
    int a,b;
    printf("Input the first number : ");
    scanf("%d", &a);

    printf("Input the second number : ");
    scanf("%d", &b);

    int *BigestNumebr = (a > b) ? &a : &b;

    printf("%d is the maximum number.\n\n", *BigestNumebr);
}


/*
7. Write a program in C to store n elements in an array 
and print the elements using pointer.

Test Data : 
Input the number of elements to store in the array :5 
Input 5 number of elements in the array : 
element - 0 : 5 
element - 1 : 7 
element - 2 : 2 
element - 3 : 9 
element - 4 : 8 
Expected Output :

 The elements you entered are :
 element - 0 : 5
 element - 1 : 7
 element - 2 : 2
 element - 3 : 9
 element - 4 : 8 */
void oppgave7(){
    int numberOfItems, value;
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &numberOfItems);

    printf("Input 5 number of elements in the array : \n");
    int numberArray[numberOfItems];
        
    for (int i = 0; i < numberOfItems; i++){
    printf("element - %d : ", i);
    scanf("%d", &value);
    numberArray[i] = value;
    }

    printf("\n\n");
    for(int i = 0; i < numberOfItems; i++){
        printf("element - %d : %d\n", i , numberArray[i]);
    }
    printf("\n\n");
}

/*8. Write a program in C to print all permutations of a given string using pointers.
Expected Output :

The permutations of the string are :
abcd  abdc  acbd  acdb  adcb  adbc  
bacd  badc  bcad  bcda  bdca  bdac  
cbad  cbda  cabd  cadb  cdab  cdba  
dbca  dbac  dcba  dcab  dacb  dabc*/
void changePosition(char *ch1, char *ch2){
    char value = *ch1;
    *ch1 = *ch2;
    *ch2 = value;
}

void oppgave8(){
    char str[] = "abcd\n";

    printf("%s", str);
    
}

/*
9. Write a program in C to find the largest element using Dynamic Memory Allocation.

Test Data : 
Input total number of elements(1 to 100): 5 

Number 1: 5 
Number 2: 7 
Number 3: 2 
Number 4: 9 
Number 5: 8
Expected Output :

The Largest element is :  9.00 */
void oppgave9(){
    int elements;
    printf("Input total number of elements(1 to 100): ");
    scanf("%d", &elements);
    printf("\n");
    int array[elements];
    int *value = (int*)calloc(elements, sizeof(int));
    
    for (int i = 0; i < elements; i++){
        printf("Number %d: ", i + 1);
        scanf("%d", &array[i]);
        if (*value < array[i]){*value = array[i];}
    }

    printf("The Largest element is : %.2f\n", (double) *value);
}

/*
10. Write a program in C to Calculate the length of the string using a pointer.

Test Data : 
Input a string : w3resource 
Expected Output :

The length of the given string w3resource is : 10    */
void oppgave10(){
    char* str = (char*)calloc(100, sizeof(char));

    printf("Input a string :");
    scanf("%[^\n]s", str);

    int size = strnlen(str, 100);
    printf("The length of the given string %s is : %d\n", str, size);
    free(str);
}

/*
11. Write a program in C to swap elements using call by reference.
Test Data : 
Input the value of 1st element : 5 
Input the value of 2nd element : 6 
Input the value of 3rd element : 7 
Expected Output :

The value before swapping are : 
element 1 = 5
element 2 = 6
element 3 = 7

The value after swapping are :
element 1 = 7
element 2 = 5
element 3 = 6 */
void oppgave11(){
    int* values = (int*)calloc(3, sizeof(int));

    if(values == NULL)return;

    printf("Input the value of 1st element : ");
    scanf("%d", values);

    printf("Input the value of 2nd element : ");
    scanf("%d", values + 1);
    
    printf("Input the value of 3nd element : ");
    scanf("%d", values + 2);
    printf("\n\n");

    printf("The value before swapping are :  \n");
    for(int i = 0; i <= sizeof(values)/sizeof(*values); i++){
        printf("Element %d = %d\n", i+1, *(values+i));
    }
    printf("\n\n");

    int temp = *(values+2);
    *values = *(values+1);
    *(values+2) = *(values+1);
    *(values+1) = temp;

    printf("The value after swapping are : \n");
    for(int i = 0; i <= sizeof(values)/sizeof(*values); i++){
        printf("Element %d = %d\n", i+1, *(values+i));
    }
    printf("\n\n");

    free(values);
}

/*
12. Write a program in C to find the factorial of a given number using pointers.
Test Data : 
Input a number : 5 
Expected Output :

The Factorial of 5 is : 120 */
void oppgave12(){
    int* value = (int*)calloc(1, sizeof(int));
    printf("Input a number : ");
    scanf("%d", value);

    int factorial;
    for (int i = *value; i > 0; i--){
        factorial = (i != *value) ? factorial * i : *value;
    }

    printf("The Factorial of %d is : %d\n", *value, factorial);
    free(value);
}

/*
13. Write a program in C to count the number of vowels and consonants in a 
string using a pointer.

Test Data : 
Input a string: string 
Expected Output :

Number of vowels : 1
Number of constant : 5*/
void oppgave13(){
    char* vowels = "aeiouy";
    char* input = (char*)calloc(100, sizeof(char));
    printf("Input a string: ");
    scanf("%s", input);

    int countVowels = 0;
    int countConst = 0;
    for(int i = 0; i < sizeof(input)/sizeof(char)-1; i++){

        if(*(input+i) == 0)break;
        
        for(int j = 0; j < sizeof(vowels)/sizeof(char) - 1; j++){
            
            if (*(input+i) == *(vowels+j)){
                countVowels++;
                break;
            }

            if (j == sizeof(vowels)/sizeof(char) - 2) countConst++;
        }
    }

    printf("Number of vowels : %d\n", countVowels);
    printf("Number of constant : %d\n", countConst);
    free(input);
}

/*
14. Write a program in C to sort an array using Pointer.

Test Data : 
testdata 
Expected Output :

Test Data : 
Input the number of elements to store in the array : 5 
Input 5 number of elements in the array : 
element - 1 : 25 
element - 2 : 45 
element - 3 : 89 
element - 4 : 15 
element - 5 : 82 
Expected Output :

 The elements in the array after sorting :
 element - 1 : 15
 element - 2 : 25
 element - 3 : 45
 element - 4 : 82
 element - 5 : 89
*/
void oppgave14(){
    int value = 0;
    int* map = (int*)calloc(10, sizeof(int));

    printf("Input the number of elements to store in the array : ");
    scanf("%d", &value);
    printf("Input %d number of elements in the array : \n", value);

    for(int i = 0; i < value; i++){
        printf("element - %d :", i+1);
        scanf("%d", (map+i));
    }
    printf("\n\n");

    //BoobleSort
    for(int i = 0; i < value; i++){
        for (int j = 0; j < value-i; j++){
            if(*(map+j+1) == 0) break;
            if(*(map+j) > *(map+j+1)){
                int temp = *(map+j+1);
                *(map+j+1) = *(map+j);
                *(map+j) = temp;
            }
        }
    }

    printf("The elements in the array after sorting :\n");
    for(int i = 0; i < value; i++){
        printf("element - %d : %d\n", i+1, *(map+i));
    }
    free(map);
}

/*15. Write a program in C to show how a function returning pointer.

Test Data : 
Input the first number : 5 
Input the second number : 6 
Expected Output :

 The number 6 is larger.  */
 int* returnGreatest(int* number1, int* number2){
     return (*number1 >= *number2) ? number1 : number2; 
 }

 void oppgaev15(){
     int number1, number2;
     int* resulte;

     printf("Input the first number : ");
     scanf("%d", &number1);

     printf("Input the second number : ");
     scanf("%d", &number2);

     resulte = returnGreatest(&number1, &number2);

     printf("The number %d is larger.\n", *resulte);
 }

/*
16. Write a program in C to compute the sum of all elements in an array using pointers.
Test Data : 
Input the number of elements to store in the array (max 10) : 5 
Input 5 number of elements in the array : 
element - 1 : 2 
element - 2 : 3 
element - 3 : 4 
element - 4 : 5 
element - 5 : 6
Expected Output :

 The sum of array is : 20 */
 void oppgave16(){
     int* array;
     int element;
     printf("Input the number of elements to store in the array (max 10) : ");
     scanf("%d", &element);

    array = (int*)calloc(element, sizeof(int));
    printf("Input %d number of elements in the array : \n", element);

    for (int i = 0; i < element; i++){
        printf("element - %d : ", i+1);
        scanf("%d", array+i);
    }

    for(int j = 1; j < element; j++){
        *array += *(array+j);
    }

    printf("The sum of array is : %d\n", *array);
 }


 /*
 17. Write a program in C to print the elements of an array in reverse order.

Test Data : 
Input the number of elements to store in the array (max 15) : 5 
Input 5 number of elements in the array : 
element - 1 : 2 
element - 2 : 3 
element - 3 : 4 
element - 4 : 5 
element - 5 : 6 
Expected Output :

 The elements of array in reverse order are :
 element - 5 : 6
 element - 4 : 5
 element - 3 : 4
 element - 2 : 3
 element - 1 : 2  */
void oppgave17(){
     int* array;
     int element;
     printf("Input the number of elements to store in the array (max 10) : ");
     scanf("%d", &element);

    array = (int*)calloc(element, sizeof(int));
    printf("Input %d number of elements in the array : \n", element);

    for (int i = 0; i < element; i++){
        printf("element - %d : ", i+1);
        scanf("%d", array+i);
    }
    printf("\n\n");
    for (int i = element-1; i >= 0; i--){
        printf("element - %d : %d\n", i+1, *(array+i));
    }
}

/*
18. Write a program in C to show the usage of pointer to structure.

Expected Output :

John Alter from Court Street*/
void oppgave18(){
    

}

/*
19. Write a program in C to show a pointer to union.
Expected Output :

Jhon Mc Jhon Mc  */
void oppgave19(){

}

/*
20. Write a program in C to show a pointer to an array 
which contents are pointer to structure. Go to the editor

Expected Output :

Exmployee Name : Alex
Employee ID :  1002 */
void oppgave20(){

}

/*21. Write a program in C to print all the alphabets using a pointer. Go to the editor
Expected Output :

The Alphabets are :
 A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z */
void oppgave21(){

}

/*
22. Write a program in C to print a string in reverse using a pointer. Go to the editor
Test Data : 
Input a string : w3resource 
Expected Output :

Pointer : Print a string in reverse order :
------------------------------------------------
Input a string : w3resource
Reverse of the string is : ecruoser3w */
void oppgave22(){

}