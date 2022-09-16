#include "main.h"

/**
 * print_numbers - prints numbers (0 - 9)
 *
 * Return: void (no return value)
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
