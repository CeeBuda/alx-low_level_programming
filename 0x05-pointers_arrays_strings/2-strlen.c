#include "main.h"
#include <string.h>

/**
 *_strlen - returns the length of a string.
 *@s: - pointer to a spring.
 *
 *Return: returns a value of type 'int'.
 */

int _strlen(char *s)
{
	size_t i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
