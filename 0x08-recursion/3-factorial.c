#include "main.h"

/**
 * factorial - determines the factorial of a given number
 * @n: argument for fatorial determination
 *
 * Return: returns the factorial of @n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
