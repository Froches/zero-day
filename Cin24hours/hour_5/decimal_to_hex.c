#include <stdio.h>

/* A program that converts any input from decimal to hexadecimal format */

int main()
{
	int num;
	printf("Input the number you want to convert:\n");
	scanf("%d", &num);

	printf("The hexadecimal equivalent of %d is %X", num, num);

	return (0);
}
