#include <stdio.h>
/* Program that takes three characters as input and prints them on the screen using getchar() and getc() */
int main()
{
	int x, y, z;

	printf("Please input three characters together:\n");
	x = getchar();
	y = getchar();
	z = getc(stdin);
	printf("The characters you just entered are: %c%c%c", x, y, z);

	return (0);
}
