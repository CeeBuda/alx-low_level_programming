#include "main.h"
#include <string.h>

/**
 *puts2 - ommits some charecters and prints others
 *@str: string of characters
 *
 *Return: No return value
 */

void puts2(char *str)
{
	/*size_t len = strlen(str);*/
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 1)
		{
		continue;
		}
		if (i == 3)
		{
		continue;
		}
		if (i == 5)
		{
		continue;
		}
		if (i == 7)
		{
		continue;
		}
		if (i == 9)
		{
		continue;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
