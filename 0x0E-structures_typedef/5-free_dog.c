#include <stdlib.h>
#include "dog.h"
/**
* free_dog - Frees a dog.
* @d: Pointer to the dog to be freed.
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
/* Free name and owner if they are not NULL */
if (d->name != NULL)
free(d->name);
if (d->owner != NULL)
free(d->owner);
/* Free the dog structure itself */
free(d);
}
}
