#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to be copied
 *
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
