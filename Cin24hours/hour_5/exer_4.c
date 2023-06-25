#include <stdio.h>

/* A program that uses getchar() and putchar() to read in a character entered by user and write the character on the screen */
int main()
{
	int c;

	printf("Enter a character:\n");
	c = getchar();
	printf("The character you entered is: ");
	putchar(c);

	return (0);
}
