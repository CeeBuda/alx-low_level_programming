#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments on command line
 * @argv: array of command line arguments
 *
 * Return: returns 0 if arguments are digits
 * and returns 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum,conv;
	
	sum = 0;

	for (i = 1; i < argc; i++)
	{
		conv = atoi(argv[i]);
		if (argc == 1)
		{
			printf("%d\n", 0);
			return (0);
		}
		else if (isdigit(conv) != 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
