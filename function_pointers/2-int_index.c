#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search for an integer
 *
 * @array: array to search through
 * @size: number of elements in the array
 * @cmp: pointer to function used to compare
 *
 * Return: the index of the first element
 * or -1 if no element matches
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*p)(int);

	p = cmp;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (p(array[i]) && array[i] != 0)
			break;
		if (i == size - 1)
			return (-1);
	}
	return (i);
}
