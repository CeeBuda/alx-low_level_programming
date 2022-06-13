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
	int i = len;
	int n;

	for (n = 0; n < i; i--)
	{
		_putchar(s[i]);
	}
}
