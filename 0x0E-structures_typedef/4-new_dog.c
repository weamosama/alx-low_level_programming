#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *new_dog - Creates a new dog_t and stores a copy of name and owner.
 *@name: Pointer to a string containing the dog's name.
 *@age: The age of the dog.
 *@owner: Pointer to a string containing the owner's nam
 *Return: Pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}
	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}
	new_dog_ptr->name = strdup(name);
        new_dog_ptr->owner = strdup(owner);
	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
