#include <stdio.h>
#include <sys/time.h>

int fibonacci(int number);
unsigned long GetTime();
int array[40];

int main(int argc, char *argv[]){
	unsigned long timeStart, timeEnd;
	timeStart = GetTime();
	int number = 40;

	for (int i = 0; i < number; i++){
		array[i] = fibonacci(i);
	}


	for (int i = 0; i < number; i++){
		printf("At index %d: %d\n", i, array[i]);
	}

	timeEnd = GetTime();
	printf("The elapsed time is %lu ms\n", (timeEnd - timeStart)/1000);
}

int fibonacci(int n) {
   if ( n < 0 ) return 1;
   else if ( n < 2 ) return n;
   else return fibonacci(n-1) + fibonacci(n-2);
}

unsigned long GetTime() {
  struct timeval tv;
  gettimeofday(&tv,NULL);
  return tv.tv_sec*(unsigned long)1000000+tv.tv_usec;
}
