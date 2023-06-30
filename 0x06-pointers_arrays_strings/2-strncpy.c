#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: first input value
 * @src: secound input value
 * @n: Third input value
 * Return: 0 (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
