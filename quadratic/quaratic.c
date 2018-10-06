/*Quadratic solution:

For an equation of the sort :

ax^2 + bx + c = 0

There are two floating-point solutions s1,s2. The expressions for those solutions are as
written on the white board

Write a program that takes three inputs and gives out the solutions.
Example :
$./solver 1 -2 1
Solution 1 is x = 1
Solution 2 is x = 2

Try the same for these inputs:
$./solver 1 -2 1
$./solver 1 2 1
$./solver 1 5 2
$./solver 0 2 5
$./solver 1 1 1

Hint:
Use math.h and sqrt for square root
What is wrong with the later cases and how do you think we can solve it?
*/


// I terminalen skriv: gcc -Wall -o quaratic quaratic.c -lm^C

#include <stdio.h>
#include <math.h>

void solution(double a, double b, double c);

int main(int agrc, char *argv[]){
	solution(1.00,-2.00,1.00);
	solution(1.00,2.00,1.00);
	solution(1.00,5.00,2.00);
	solution(0.00,2.00,5.00);
	solution(1.00,1.00,1.00);
	return 0;
}

void solution(double a, double b, double c){
	double solution1 = (-b + sqrt(((b*b)-(4.00*a*c))))/(2.00*a);
	double solution2 = (-b - sqrt(((b*b)-(4.00*a*c))))/(2.00*a);
	printf("S1: %lf\nS2: %lf\n", solution1, solution2);
	printf("\n");
}






















