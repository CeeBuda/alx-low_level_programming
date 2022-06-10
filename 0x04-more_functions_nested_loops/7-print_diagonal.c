#include "main.h"

/**
 *print_diagonal - Draws a diagona line on the terminal
 *@n: input value
 *
 *Return: returns no value
 */

void print_diagonal(int n)
{
	int a = 0;
	int b;
	char dia = '\\';
	char space = ' ';

	while (a < n)
	{
		while (b < n)
		{
			_putchar(space);
			b++;
		}
		if (b == n)
		{
			_putchar(dia);
			_putchar('\n');
			a++;
		}
	}
}
