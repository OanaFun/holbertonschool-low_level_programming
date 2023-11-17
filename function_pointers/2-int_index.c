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

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (1);
}
