#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu Byte(s)\n", sizeof(a));
	printf("Size of an int: %lu Byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu Byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu Byte(s)\n", sizeof(d));
	printf("Size of a float: %lu Bytes(s)\n", sizeof(e));
	return (0);
}
