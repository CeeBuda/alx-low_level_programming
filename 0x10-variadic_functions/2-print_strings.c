#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings to be printed
 *
 * Return: void (no return value)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		if (separator == NULL)
		{
			printf("%s", str);
		}

		printf("%s", str);

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
