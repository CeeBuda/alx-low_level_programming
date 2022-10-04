#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: pointer to a string
 *
 * Return: length of a string
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

/**
 * print_rev - prints a string in reverse
 * @s: pointer to a string
 *
 * Return: void (no return value)
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
