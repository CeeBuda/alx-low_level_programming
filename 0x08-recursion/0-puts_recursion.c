#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string argument
 *
 * Return: no return value
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
