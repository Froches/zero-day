#include <stdio.h>
/**
 * multiply - function that multiplies two integers
 * Return: product of the numbers
*/
int multiply(int x, int y)
{
	int product;
	product = x * y;

	return (product);
}

int main()
{
	int multiple;
	int x, y;
	printf("Input two numbers : ");
	scanf("%d, %d", &x, &y);

	multiple = multiply(x, y);

	printf("The result of multiplying %d with %d is %d", x, y, multiple);
	return (0);
}
