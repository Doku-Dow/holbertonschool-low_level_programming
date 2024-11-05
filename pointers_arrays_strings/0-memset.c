#include "main.h"
/**
 *_memset - fills memory with constant byte
 *@s: string
 *@b: character that will be used to fill the array.
 *@n:number of bytes to set (fill) in the array.
 *Return: returns the modified string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
