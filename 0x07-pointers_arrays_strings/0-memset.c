#include "main.h"
/**
 * _memset -  function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: first starting address of memory to be filled
 * @b: first desired value
 * @n: first number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
