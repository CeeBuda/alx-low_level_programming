#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabets in lowercase then uppercase
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
