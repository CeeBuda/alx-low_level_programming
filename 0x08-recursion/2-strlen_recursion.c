#include "main.h"

/**
 * _strlen_recursion - computes the length of a string using recursion
 * @s: pointer to a string
 *
 * Return: length of a stirng
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s == '\0')
	{
		return (len);
	}
	len++;
	return (len + _strlen_recursion(s + 1));
}
