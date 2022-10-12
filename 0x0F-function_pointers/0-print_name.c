#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function that computes the printing of a name
 *
 * Return: void (no return value)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
