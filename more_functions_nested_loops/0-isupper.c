#include "main.h"
/**
 *_isupper - chekcs if characters are uppercase
 *
 *c - characters that has to be checked
 *
 * @c parameter: checking c characters
 *
 * Return: 1 if char is uppercase, otherwise 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
