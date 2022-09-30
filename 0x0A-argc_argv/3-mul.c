#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two mumbers
 * @argc: number of arguments passed on command line of type int
 * @argv: an array of arguments passed on command line of type char
 *
 * Return: returns 0 if the program recieved two arguments
 * of type int and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
}
