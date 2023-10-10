#include "dog.h"

/**
 *init_dog - Initializes a struct dog with the provided values.
 *@d: Pointer to a struct dog to be initialized.
 *@name: Pointer to a string containing the dog's name.
 *@age: The age of the dog.
 *@owner: Pointer to a string containing the owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
