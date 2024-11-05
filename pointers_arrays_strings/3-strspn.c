#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string 2
 * Return: both strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
