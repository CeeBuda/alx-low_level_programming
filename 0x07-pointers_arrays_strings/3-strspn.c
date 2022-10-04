#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: returns the length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;

	count = 0;

	while (*s != '\0')
	{
		if (*s == *accept)
		{
			count++;
		}
		s++;
		a
	}
	return (count);
}
