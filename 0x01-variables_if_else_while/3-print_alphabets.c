#include <stdio.h>
/**
 * main - Program that prints alphabet in lowercase
 * Return : 0 (Success)
 */

int main(void)

{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z')
		{
			putchar(c);
			c++;
		}
	while
		(d <= 'Z')
		{
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
