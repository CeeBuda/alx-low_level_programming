#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: string container
 *@src: string container
 *
 *Return: returns a pointer to a string
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
