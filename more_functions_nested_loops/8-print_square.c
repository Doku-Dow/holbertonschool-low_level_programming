#include "main.h"
/**
 *print_square - prints a square out of #
 *@size: size of the # square
 */
void print_square(int size)
{
	int line;
	int column;

	if (size <= 0)
	_putchar('\n');

	for (line = 0; line < size; line++)
{
	for (column = 0; column < size; column++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
