#include "main.h"

/**
 * puts2 - prints every other number starting with the first character
 * @str: string
 *
 * Return: void (no return value)
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
