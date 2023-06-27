#include "main.h"

/**
 * char *_strcpy -function that copies the string pointed to by src
 * @dest:first input (copy to)
 * @src: second input (copy from)
 * Return: 0 (string)
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
