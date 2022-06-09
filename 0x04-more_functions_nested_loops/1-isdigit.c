#include "main.h"

/**
 *_isdigit - checks for a digit (0 through 9)
 *@c: input value
 *
 *Return: returns 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c == 0)
	{
		return (1);
	}
	else if (c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
