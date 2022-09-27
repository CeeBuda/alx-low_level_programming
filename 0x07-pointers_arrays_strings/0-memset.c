#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory address
 * @b: byte to fill the memory with
 * @n: number of bites to be filled
 *
 * Return: returns a pointer to @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; n > 0; n--, i++)
	{
		*(s + i) = b;
	}
	return (s);
}
