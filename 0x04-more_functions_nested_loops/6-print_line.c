#include "main.h"

/**
 *print_line - Draws a straight line in the terminal
 *@n: input value
 *
 *Return: returns no value
 */

void print_line(int n)
{
	char line = '_';
	int a = 0;

	while (a < n)
	{
		_putchar(line);
		a++;
	}
	_putchar('\n');
}
