#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: void (no return value)
 */

void rev_string(char *s)
{
	int i, len, mid;
	char temp;

	len = _strlen(s);
	mid = len / 2;

	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
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
