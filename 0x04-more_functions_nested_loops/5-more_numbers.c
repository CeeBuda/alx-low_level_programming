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

	while (n < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar(a + '0');
		}	
		_putchar('\n');
		n++;
	}
}
