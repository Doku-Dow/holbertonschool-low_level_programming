#include "main.h"

/**
*binary_to_uint - Converts a binary number to an unsigned int.
*@b: A pointer to a string of 0 and 1 chars.
*Return: If b is NULL or contains chars not 0 or 1 - 0.
*         Otherwise - the converted number.
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int decimal = 0;
int str_len = 0, base = 1;

if (!check_valid_string(b))
return (0);

while (b[str_len] != '\0')
str_len++;

while (str_len)
{
decimal += ((b[str_len - 1] - '0') * base);
base *= 2;
str_len--;
}
return (decimal);
}
