#include "main.h"
/**
 *  _strlen - return the length of a string
 *  @s: value of string
 *  Return: lenght (success)
 */
int _strlen(char *s)
{
	int longi = 0;
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
