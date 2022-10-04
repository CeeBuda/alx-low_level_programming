#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of cmd line arguments
 * @argv: array of cmd line arguments
 *
 * Return: returns 1 if arguments are not exactly 1, 
 * return 0 otherwise
 */
int main(int argc, char *argv[])
{
	int cents;

	cents = atoi(argv[1]);

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (cents % 25 == 0 && cents % 5 == 0)
	{
		printf("%d\n", cents / 25);
	}
	else if (cents % 10 == 0 &&
}
