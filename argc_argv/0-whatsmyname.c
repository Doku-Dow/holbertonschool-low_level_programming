#include <stdio.h>

/**
*main - prints the program name, followed by a new line.
*@argc: the number of arguments given to the program
*@argv:the array of pointers to the arguments
*Return: the name of the program
*/

int main(int argc, char *argv[])
{
(void)argc;

printf("%s\n", argv[0]);
return (0);
}
