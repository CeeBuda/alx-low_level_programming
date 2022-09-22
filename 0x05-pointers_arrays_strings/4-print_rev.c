#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: String to be printed
 *
 * Return: void (no return value)
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

void print_rev(char *s)
{
	int i;

	i = _strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
