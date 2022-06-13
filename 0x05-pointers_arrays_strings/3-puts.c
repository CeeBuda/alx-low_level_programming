#include "main.h"
#include <string.h>
/**
 *_puts - Prints a string to stdout.
 *@str: String of characters.
 *
 *Return: No return value.
 */

void _puts(char *str)
{
	size_t i = 0;
	size_t len = strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
