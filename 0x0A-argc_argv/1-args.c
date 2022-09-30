#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments passed on command line
 * @argv: an array of arguments passed on command line of type char
 *
 * Return: 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
