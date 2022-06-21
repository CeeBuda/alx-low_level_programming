#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer variable
 * @b: constant byte
 * @n: number of places in memory to be filled
 *
 * Return: returns pointer to _memset
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
