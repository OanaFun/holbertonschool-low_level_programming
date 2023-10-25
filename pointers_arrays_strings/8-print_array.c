#include <stdio.h>
#include "main.h"
/**
 * print_array - print the n elements of and array of integers
 * followed by a new line
 *
 * @a: the array
 *
 * @n: the number of elements of the array to be printed
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
