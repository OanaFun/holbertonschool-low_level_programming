#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated
 * memory
 *
 * @nmemb: number of elements
 * @size: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 * NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *block;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
