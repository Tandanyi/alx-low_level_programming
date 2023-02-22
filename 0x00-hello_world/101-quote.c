#include <stdio.h>
#include <unistd.h>

/**
 * main - prints an error message
 * Description: the function writes a message when called
 * Return: 1
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (0);
}
