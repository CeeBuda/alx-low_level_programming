#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: array
 * @n: number of elements
 *
 * Return: void (no return value)
 */
void print_array(int *a, int n)

{
	int i;
	
	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
		{
			printf(", ");
		}
		else
		{
			break;
		}
	}
	printf("\n");
}
