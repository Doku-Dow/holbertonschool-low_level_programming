#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: string
 *@c: character to be found in *s
 *Return: returns s but returns NULL if the character isn't found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		s++;
	}
		if (c == '\0')
		{
			return (s);
		}
	return ('\0');
}
