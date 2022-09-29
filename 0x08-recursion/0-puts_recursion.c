#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: pointer to a string
 *
 * Return: void (no return value)
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
