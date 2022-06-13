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
	int result;

	result = strlen(*s);

	return (result);
}
