#include "main.h"

/**
 * print_line - prints a line in the terminal
 *
 * @n: number of times '-' should be printed
 *
 * Return: void (no return value)
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
