#include <stdio.h>
#include "main.h"
/**
*print_diagsums -  a function that prints the sum of
* the two diagonals of a square matrix of integers.
*@a:matrix to be summed
*@size:size of the matrix
*/
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
