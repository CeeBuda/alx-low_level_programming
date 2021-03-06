#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints numbers from 1 to 100.
 *Prints Fizz for multiples of 3.
 *Prints Buzz for multiples of 5.
 *
 *Return: 0
 */

int main(void)
{
	int i = 1;

	while (i < 100)
	{
		printf("%d ", i);

		if (i % 15 == 0)
		{
			printf("FizzBuzz\t");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\t");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\t");
		}
		i++;
	}
	printf("\n");

	return (0);
}
