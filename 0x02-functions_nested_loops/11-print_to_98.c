#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: natural number
 *
 *Return: no return value
 */
void print_to_98(int n)
{
	while (n < 0 && n <= 98)
	{
	_putchar(n + '0');
	n++;
	while (n > 0 && n <= 98)
	{
	_putchar(n + '0');
	n++;
	while (n == 0 && n <= 98);
	{
	_putchar(n + '0');
	n++;
	while (n > 98)
	{
	_putchar(n + '0');
	n--;
	}
	}
	}
	}
	_putchar('\n');
}
