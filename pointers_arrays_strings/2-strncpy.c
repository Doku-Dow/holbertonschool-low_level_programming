#include "main.h"

/**
* *_strncpy - See description
*@dest: char type string
*@src: char type string
*Description: Copy the string pointed to by pointer `src` to
*the buffer pointed to by `dest`
*@n:max number of byte copied
*Return: Pointer to `dest`
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
