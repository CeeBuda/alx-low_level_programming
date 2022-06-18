#include <stdio.h>
#include <unistd.h>
/**
 *main - prints string to stdout.
 *
 *Return: 0
 */

int main(void)
{
	char buff [] = {"and that piece of art is useful\" - Dora Korpar,\n"};

	return (write(1, buff, 50));
}
