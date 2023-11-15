#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory of dog structure
 *
 * @d: pointer to the dog structure
 *
*/
void free_dog(dog_t *d)
{
	if (d != 0)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
