#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments passed on command line of type int
 * @argv: an array of arguments passed on command line of type char
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
