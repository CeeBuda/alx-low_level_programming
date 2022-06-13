#include "main.h"

/**
 *swap_int - Swaps the values of two intergers.
 *@a: input value of type 'int'.
 *@b:input value of type 'int'.
 *
 *Return: No return value.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
