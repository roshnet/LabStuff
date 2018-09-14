// code to illustrate switch-case statement in C

#include <stdio.h>

// showing corresponding spelling of digit

int main(void){

	int digit;
	printf("\nEnter a digit: ");
	scanf("%d", &digit); 

	switch (digit){
		case 0:
			printf("\nIt is spelt as Zero.");
			break;
		case 1:
			printf("\nIt is spelt as One.");
			break;
		case 2:
			printf("\nIt is spelt as Two.");
			break;
		case 3:
			printf("\nIt is spelt as Three.");
			break;
		case 4:
			printf("\nIt is spelt as Four.");
			break;
		case 5:
			printf("\nIt is spelt as Five.");
			break;
		case 6:
			printf("\nIt is spelt as Six.");
			break;
		case 7:
			printf("\nIt is spelt as Seven.");
			break;
		case 8:
			printf("\nIt is spelt as Eight.");
			break;
		case 9:
			printf("\nIt is spelt as Nine.");
			break;
		default:
			printf("\nPlease enter a single-digit value.");
	}

	printf("\n\n[PROGRAM FINISHED]\n\n");
	return 0;

}