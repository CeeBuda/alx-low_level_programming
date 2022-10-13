#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything 
 * @format: type of aregument passed to the funtion
 *
 * Return: void (no return value)
 */
void print_all(const char * const format, ...)
{
	char c;
	int num, i, j, len;
	float dec;
	char *str;
	va_list args;

	j = 0;
	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		len++;
		i++;
	}
	
	while (j < len)
	{
		switch (format[j])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				dec = va_arg(args, double);
				printf("%f", dec);
				break;
			case 's':
				str = va_arg(args, char*);

				if (str == NULL)
				{
					printf("(nil)");
				}
				printf("%s", str);
				break;
		}
		if (j > 0 && j < (len - 1))
		{
			printf(", ");
		}
		j++;
	}
	printf("\n");
}
