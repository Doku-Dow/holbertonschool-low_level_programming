#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	return (write(1, &c, 1));
}
