#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initialises
 * with a specific char.
 * @size: size of array.
 * @c: initialising char.
 *
 * Return: returns NULL if size = 0, returns a pointer
 * to the array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(c));

	for (i = 0; i < size; i++)
	{
		if (size != 0 && i < size)
		{
			array[i] = c;
		}
		else if (size == 0)
		{
			array = NULL;
		}
		else
		{
			array = NULL;
		}
	}
	return (array);
}
