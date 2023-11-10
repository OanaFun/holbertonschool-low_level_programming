#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 *
 * @min: the smallest value in the array
 * @max: the largest value in the array
 *
 * Return: pointer to the newly created array
 * NULL on failure
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *block;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (i = min; i <= max; i++)
		{
			block[j] = i;
			j++;
		}
		return (block);
	}
	else
		return (NULL);
}
