#include "main.h"
/**
 * main - function that prints the alphabet in lowercase
 * Return: 0 (success)
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		 _putchar(i);
	}
	_putchar("\n");
}
