#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mirror(char *s)
{
	for (int i = 0; i < strlen(s) / 2; i++) {
		char trash = *(s + i);

		*(s + i) = *(s + (strlen(s) - 1 - i));

		*(s + (strlen(s) - 1 - i)) = trash;
	}
}

int main()
{
	char myLittleString[256];
	// prompt 
	printf("Enter a string: ");
	scanf("%s", myLittleString);

	mirror(myLittleString);

	printf("Oglinda oglinjoara: %s\n", myLittleString);

	return 0;
}

