#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be halved and printed
 *
 * Return: void (no return value)
 */
int _strlen(char *s);

void puts_half(char *str)
{
	int n, i;

	n = _strlen(str);
	i = n / 2;
	
	while (str[i] != '\0')
	{
		if (n % 2 == 0)
		{
			/*n = n / 2;*/
			_putchar(str[n / 2]);
			n++;
		}
		else
		{
			n = n / 2 + 1;
			_putchar(str[n]);
			n++;
		}
		i++;
	}
	_putchar('\n');
}

int _strlen(char *s)
{
	int i, len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
