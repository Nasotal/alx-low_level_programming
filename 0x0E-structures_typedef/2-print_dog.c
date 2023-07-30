#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a dog struct
 * @dg: struct dog to print
 */
void print_dog(struct dog *d)
{
        if (dg == NULL)
                return;

        if (dg->name == NULL)
                dg->name = "(nil)";
        if (dg->owner == NULL)
                dg->owner = "(nil)";

        printf("Name: %s\nAge: %f\nOwner: %s\n", dg->name, dg->age, dg->owner);
}
