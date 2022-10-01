#include "main.h"

/**
 * _strlen - computes the length of a string.
 *
 * @s: Pointer to a string.
 *
 * Return: length of a string.
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
