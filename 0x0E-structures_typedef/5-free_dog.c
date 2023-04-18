#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: struct dog
 * Maya 18/04/23
 *
 * Return: no return
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
