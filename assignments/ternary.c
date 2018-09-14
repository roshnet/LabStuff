// Code shows usage of ternary operator by finding the larger of two numbers

#include <stdio.h>

int main(void){

	int a, b;
	printf("\nEnter space separated values of two variables: ");
	scanf("%d", &a);
	scanf("%d", &b);
	int max;
	max = (a > b)? a : b;
	printf("\nGreater of the two is: %d\n", max);
	printf("\n\n[PROGRAM FINISHED]\n\n");
	return 0;
}
