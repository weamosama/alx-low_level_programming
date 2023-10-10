#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - Frees memory associated with a dog_t structure.
 *@d: Pointer to a dog_t structure to be
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
