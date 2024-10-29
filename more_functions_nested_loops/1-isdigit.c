#include "main.h"
/**
 *_isdigit - checks for said digits
 *
 * c - characters that has to be checked
 *
 *@c parameter: checking c characters
 *
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
