#include "main.h"
/**
 *more_numbers - prints numbers from 0 to 14 ten times
 *
 *
 */
void more_numbers(void)
{
	int i = 0;
	int k;

	while (i < 10)
{
	for (k = 0 ; k <= 14 ; k++)
{
	if (k > 9)
{
	_putchar((k / 10) + '0');
}
	_putchar((k % 10) + '0');
}
	_putchar('\n');
	i++;
}
}
