#include <stddef.h> /* Include this header for NULL definition */
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL) /* Check if the pointer is not NULL */
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}

