#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(const char *str)
{
	int stringSize = 0;

	while (*(str + stringSize))
		stringSize++;

	return stringSize;
}

/*
adresa fiecărui caracter de pe poziția i care este egal cu 
caracterul de poziția i + 2^i (dacă i + 2^i depășește dimensiunea 
șirului de caractere se va folosi operația modulo)
*/
void equality_check(const char *str)
{
	int i = 0;

	while (my_strlen(str) - i) {
		if(!(*(str + i) - *(str + ((i + (1 << i)) % (my_strlen(str)))))) {
			printf("Address of %c: %p\n", *(str + i), (str + i));
		}

		i++;
	}	
}

int main(void)
{
	char myLittleString[256];

	// prompt 
	printf("Enter a string: ");
	scanf("%s", myLittleString);
	
	printf("Well, the string has the size %d.\n", my_strlen(myLittleString));

	equality_check(myLittleString);

	return 0;
}

