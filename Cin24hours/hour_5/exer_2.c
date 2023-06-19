#include <stdio.h>
/* Displays two numbers and align them at the left edge of the field */
int main()
{
	int x;
	float y;

	x = 123;
	y = 123.456;

	printf("%d %-5d\n%f %-10.3f", x, x, y, y);

	return (0);
}
