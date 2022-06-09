#include "main.h"
#include <stdio.h>
/**
 *more_numbers - prints numbers 0 to 14 ten times
 *
 *Return: no return value
 */
void more_numbers(void)
{
	int n = 0;
	int a;
	int b;

	while (n < 10)
	{
		for (a = 0, b = '0'; a <= 14; a++, b++)
		{
			if (a > 9)
			{
				_putchar('1');
			}
			if (b > 57)
			{
				b = 48;
			}
			_putchar(b);
		}
		_putchar('\n');
		n++;
	}
}
