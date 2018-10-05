/*
Code to find the times a character occurs in a test string.
*/
#include <stdio.h>


int frequency(char ch, char string[]){

	int freq, idx;	// Variable to store frequency, and a counter variable.
	freq = idx = 0;
	while (string[idx] != '\0'){
		if (string[idx] == ch)
			freq += 1;	// Increment 'freq' if an occurrence is found.
		idx += 1;
	}
	return freq; // while-loop runs till the end of string, and returns the frequency of the character.
}


int main(void){

	char search_char, search_string[50];
	int freq;

	// obtain data from user.
	printf("\nThe string: ");
	scanf("%[^\n]%*c", search_string);
	printf("\nCharacter to find frequency for: ");
	scanf("%c", &search_char);

	// get output from the function. 
	freq = frequency(search_char, search_string);

	// display results
	printf("\nIt occurs %d times in the string.\n", freq);
	return 0;
}