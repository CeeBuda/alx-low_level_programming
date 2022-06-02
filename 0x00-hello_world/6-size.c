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

	printf("Size of a char:%u Byte(s)", sizeof(a));
	printf("Size of an int:%u Byte(s)", sizeof(b));
	printf("Size of a long int:%u Byte(s)", sizeof(c));
	printf("Size of a long long int:%u Byte(s)", sizeof(d));
	printf("Size of a float:%u Bytes(s)", sizeof(e));

	return (0);
