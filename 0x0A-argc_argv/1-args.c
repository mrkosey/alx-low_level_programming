#include <stdio.h>
#include "main.h"

/**
 * main - program that print the number of
 * arguments passed to the program
 * @argc: variable of  of arguments
 * @argv: variable of array of arguments
 * Return: 0 (Success)
 */



int main(int argc, char *argv[])

{

(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);



	return (0);
}
