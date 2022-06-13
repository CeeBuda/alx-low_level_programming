#include "main.h"
#include <string.h>

/**
 *rev_string - Reverses a string.
 *@s: String of characters.
 *
 *Return: No return value.
 */

void rev_string(char *s)
{
	size_t len = strlen(s);
	int i;

	for (i = len - 1; i >=0; i--)
	{
		_putchar(s[i]);
	}
}
