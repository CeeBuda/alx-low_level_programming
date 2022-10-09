#include "main.h"

/**
 * _strcpy - copies a string 
 * @src: pointer to the string to be copied
 * @dest: buffer where string will be copied into
 *
 * Return: pointer to dest 
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0, j = 0; src[i] != '\0'; i++, j++)
	{
		dest[j] = src[i];
	}
	dest[j] = '\0';

	return (dest);
}
