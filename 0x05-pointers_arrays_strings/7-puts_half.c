#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be halved and printed
 *
 * Return: void (no return value)
 */
void puts_half(char *str)
{
	int n;

	n = _strlen(str);

	if (n % 2 == 0)
	{
		n /= 2;
	}
	else
	{
		n = (n - 1) / 2;
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

/**
 * _strlen - computes the length of a string
 * @s: pointer to a string
 *
 * Return: length of @s
 */
int _strlen(char *s)
{
	int i, len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
