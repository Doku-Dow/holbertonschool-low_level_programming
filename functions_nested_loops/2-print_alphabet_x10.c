#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabet 10 times
 *
 * return: always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char alphabet;

	while (n < 10)
{
	alphabet = 'a';
	while (alphabet <= 'z')
{
	_putchar(alphabet);
	alphabet++;
}
	_putchar('\n');
	n++;
}
}
