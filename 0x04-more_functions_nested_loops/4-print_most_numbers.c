#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers - prints numbers 0 - 9 excluding 3 & 4
 *
 *Return: no return value
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	if (n == 2)
	{
		continue;
	}
	if (n == 4)
	{
		continue;
	}
		_putchar(n + '0');
	}
	_putchar('\n');
}
