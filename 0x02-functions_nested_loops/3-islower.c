#include "main.h"

/**
 *_islower - checks for lower case character
 *
 *@c: input value
 *
 *Return: returns 1 if c is lower case and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
