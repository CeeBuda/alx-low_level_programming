#include "main.h"

/**
 * more_numbers - prints numbers (0 - 14) ten times
 *
 * Return: void (no return value)
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			for (; j == 9;)
			{

			}
			_putchar(j + '0');
		}
		i++;
		_putchar('\n');
	}
}
