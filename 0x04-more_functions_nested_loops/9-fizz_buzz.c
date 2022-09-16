#include <stdio.h>

/**
 * main - checks for miltiples of 3 & 5
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
