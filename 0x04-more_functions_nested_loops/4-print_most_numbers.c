#include "main.h"

/**
 * print_most_numbers - prints numbers (0 - 9) except (2 & 4)
 *
 * Return: void (no return vaue)
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		_putchar(n + '0');
	}
	_putchar('\n');
}
