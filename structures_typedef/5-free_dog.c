#include "dog.h"
#include <string.h>
/**
 * free_dog -  function that frees dogs
 * @d : pointer
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return d;
	free(d->name);
	free(d->owner);
	free(d);
}
