#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a function given as a parameter
 * on each element of an array
 *
 * @array: the array being passed
 * @size: size of the array
 * @action: pointer to the function we need to use
 *
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
