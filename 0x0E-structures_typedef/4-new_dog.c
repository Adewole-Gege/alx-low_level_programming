#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
* new_dog - Creates a new dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Return: Pointer to the new dog_t struct, or NULL if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *name_copy, *owner_copy;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
name_copy = malloc(strlen(name) + 1);
owner_copy = malloc(strlen(owner) + 1);
if (name_copy == NULL || owner_copy == NULL)
{
free(d);
free(name_copy);
free(owner_copy);
return (NULL);
}
strcpy(name_copy, name);
strcpy(owner_copy, owner);
d->name = name_copy;
d->age = age;
d->owner = owner_copy;
return (d);
}
