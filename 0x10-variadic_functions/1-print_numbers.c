#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between the numbers
 * @n: number of arguments
 *
 * Return: void (no return value)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list args;

	va_start(args, n);

	for (i = 0; i <= n; i++)
	{
		j = va_arg(args, int);

		if (separator == NULL)
		{
			printf("%d", j);
		}

		printf("%d", j);

		if (i < (n - 1))
		{
			printf("%s", separator);
		}
		else
		{
			break;
		}
	}
	va_end(args);
	printf("\n");
}
