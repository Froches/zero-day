#include <stdio.h>
/**
 * 3integer_add - adds three integers
*/

int integer_add(int x, int y, int z)
{
	int sum;
	sum = x + y + z;

	return (sum);
}

int main(void)
{
	int added;
	added = integer_add(5, 10, 15);
	printf("The sum of the three numbers is = %d", added);

	return (0);
}
