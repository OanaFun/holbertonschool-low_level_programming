#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars, initialize it with a specific char
 *
 * @size: the size of the array
 * @c: the char to initialize the array
 *
 * Return: pointer to the array, or NULL if size is 0
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
