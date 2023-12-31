#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: 0 (the resulting square root)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
