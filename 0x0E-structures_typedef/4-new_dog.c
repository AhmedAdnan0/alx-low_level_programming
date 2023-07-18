#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog ID
 * @name: dog name
 *  @age: dog age
 * @owner: dog owner
 *
 * Return: new dog ID
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i = 0, j = 0;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	while (name[i])
		++i;
	while (owner[j])
		++j;

	d->name = malloc((i + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = malloc((j + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; name[i]; ++i)
		d->name[i] = name[i];
	d->name[i] = name[i];

	d->age = age;

	for (j = 0; owner[j]; ++j)
		d->owner[j] = owner[j];
	d->owner[j] = owner[j];

	return (d);
}
