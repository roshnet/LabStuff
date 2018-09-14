// Code to find greatest of three numbers using ternary operator

#include <stdio.h>

int main(void){

	int a, b, c;
	printf("\nEnter space separated values of two variables: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int max;
	max = (a > b)? ((a>c)?a:c):(b>c)?b:c;
	printf("\nGreatest is: %d\n", max);
	printf("\n\n[PROGRAM FINISHED]\n\n");
	return 0;
}