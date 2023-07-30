#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -a function that frees memory
 * allocated for a struct dog
 * @dg: struct dog to free
 */
void free_dog(dog_t *dg)
{
        if (dg)
        {
                free(dg->name);
                free(dg->owner);
                free(dg);
        }
}
