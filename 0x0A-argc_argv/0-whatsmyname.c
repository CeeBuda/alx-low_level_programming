#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints program name
 * @argc: number of arguments passed to commmand line
 * @argv: an array of arguments passed in command line of type char
 *
 * Return: 0 (Success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
