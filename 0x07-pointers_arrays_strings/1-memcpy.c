#include "main.h"
/**
 * _memcpy - function copies n bytes from memory
 * area src to memory area dest
 * @dest: first memory where is stored
 * @src: first memory where is copied
 * *@n: number of bytes
 * Return: 0 (copied memory with n byted changed)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
