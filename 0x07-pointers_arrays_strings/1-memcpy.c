#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination where memory area is copied to
 * @src: source where memory area is copied from
 * @n: size to be copied
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
