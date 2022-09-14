#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @: input number
 *
 * Return: last digit of a number
 */
int print_last_digit(int r)
{
	if (r >= 0)
	{
		_putchar((r % 10) + '0');
	}
	else if (r < 0)
	{
		r = r * (-1);
		_putchar((r % 10) + '0');
	}

	return (0);
}
