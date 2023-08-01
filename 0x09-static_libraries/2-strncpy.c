#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: first input value
 * @src: secound input value
 * @n: third input value
 * Return: (dest) success
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
