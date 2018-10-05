

#include <stdio.h>

int length_of_string(char str[]){

	int idx;
	idx = 0;
	while (str[idx] != '\0')
		idx += 1;
	return idx;
}

int main(void){

	char string[100];
	int length;
	printf("\nEnter the string to find length: ");
	scanf("%s", string);
	length = length_of_string(string);
	printf("%d\n", length);
	return 0;
}