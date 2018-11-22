#include <stdio.h>
int main()
{
   // int x[4], i;

   // for(i = 0; i < 4; ++i)
   //    printf("&x[%d] = %p\n", i, x+i);

   // printf("Address of array x: %p\n", x);
   // printf("Size of array is %ld\n", sizeof(x));
   // printf("Size of int is %ld\n", sizeof(int));
   
   
   int x[5] = {1, 2, 3, 4, 5};
   int* ptr;

   ptr = &x[2]; 

   printf("*ptr = %d \n", *ptr);
   printf("*ptr+1 = %d \n", *ptr+1);
   printf("*ptr-1 = %d\n", *ptr-1);

   return 0;
}