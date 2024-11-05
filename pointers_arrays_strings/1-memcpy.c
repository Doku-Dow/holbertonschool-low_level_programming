#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: string
 *@src: string that will get copied to *dest
 *@n: number of memory area bytes
 *Return: returns dest string after changes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
