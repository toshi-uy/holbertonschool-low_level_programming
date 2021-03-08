#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Entry point
 * @d: parameter
 *
 * Description: function that frees dogs
 *
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
