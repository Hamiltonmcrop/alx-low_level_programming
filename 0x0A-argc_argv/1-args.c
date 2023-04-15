#include <stdio.h>
#include "main.h"
/**
 * main - print the number of args passed to the program
 * @argc: number of args
 * @argv: array of ars
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);
	return (0);
}
