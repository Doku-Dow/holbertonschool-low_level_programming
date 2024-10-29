#include <stdio.h>

/**
* _strcpy - Copy string
* @dest: Array
* @src: String to copy
* Return: String copied
*/
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
