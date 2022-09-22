#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: Pointer 1
 * @b: Pointer 2
 *
 * Return: void (no return value)
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
