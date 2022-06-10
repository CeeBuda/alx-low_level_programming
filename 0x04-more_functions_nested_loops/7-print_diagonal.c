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
	char dia = '\\';

	while (a < n)
	{
		if (n == 0)
		{
			
		_putchar(dia);
		_putchar('\n');
		a++;
	}
}
