#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 *
 * Return: returns a pointer to the duplicated string,
 * NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	unsigned int size, i, j;
	char *cpy;

	i = 0;
	size = _strlen(str);
	cpy = malloc(size * sizeof(char));

	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
		cpy[j] = str[i];
	}
	return (cpy);
}

/**
 * _strlen - computes length of string
 * @s: string
 *
 * Return: returns the length of a string
 */
unsigned int _strlen(char *s)
{
	unsigned int i, len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
