#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: input number
 *
 * Return: last digit of a number
 */
int print_last_digit(int r)
{
	r = r % 10;

	_putchar(r + '0');

	return (r);
}
