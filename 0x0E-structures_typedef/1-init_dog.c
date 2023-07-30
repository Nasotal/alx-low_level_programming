#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the dog struct
 * @dg: pointer to struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *dg, char *name, float age, char *owner)
{
	if (dg == NULL)
		dg = malloc(sizeof(struct dog));
	dg->name = name;
	dg->age = age;
	dg->owner = owner;
}
