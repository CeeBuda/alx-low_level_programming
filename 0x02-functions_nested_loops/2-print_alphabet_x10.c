#include "main.h"

/**
 *print_alphabet_x10 - Prints alphabet 10 times
 *
 *Return: returns nothing
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 1; n <= 10; n++)
	{

	for (c = 'a'; c <= 'z'; c++)
	_putchar(c);
	_putchar('\n');
	}
}
