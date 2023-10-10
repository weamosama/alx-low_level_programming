#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - Frees memory associated with a dog_t structure.
 *@d: Pointer to a dog_t structure to be
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
