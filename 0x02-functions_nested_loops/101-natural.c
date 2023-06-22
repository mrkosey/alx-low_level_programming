#include <stdio.h>

/**
 * main- Program that prints the sum of all the multiples 3,5, to 1024
 * return: Always (Success)
 */

int main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}
		a++;
	}
	printf("%d\n", b);
	return (0);
}
