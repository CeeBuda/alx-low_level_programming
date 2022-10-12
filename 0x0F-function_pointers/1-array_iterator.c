#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a funtion given as a parameter
 * on each element of an array
 * @array: an array of elements of type int
 * @size: size of the array
 * @action: points to the function that needs to be used
 *
 * Return: void (no return vaue)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
