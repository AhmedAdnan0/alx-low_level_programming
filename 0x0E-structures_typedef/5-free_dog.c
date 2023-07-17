#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - clear dog's ID
 * @d: dog ID
 */

void free_dog(dog_t *d)
{
	free(d);
}
