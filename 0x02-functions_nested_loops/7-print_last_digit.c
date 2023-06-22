#include "msin.h"

/**
 * print_last_digit - Function that print last number of a digit
 * @n: The number to be treated
 * Return : Value of the last digit is a number
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
