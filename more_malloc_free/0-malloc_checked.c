#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 *
 * @b: size of memory to allocate
 *
 * Return: a pointer to the allocated memory,
 * else if return exit status 98
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
