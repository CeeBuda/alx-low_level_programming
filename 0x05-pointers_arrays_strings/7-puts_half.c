#include "main.h"
#include <string.h>

/**
 *puts_half - prints half of a string with odd number of characters
 *@str: string of characters
 *
 *Return: No return value
 */

void puts_half(char *str)
{
	int  i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		for (j = ((i + 1) / 2); j < i; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
	for (j = i / 2; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
