#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: String to be printed
 *
 * Return: void (no return value)
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
