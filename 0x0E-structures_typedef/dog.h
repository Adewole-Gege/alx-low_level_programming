#ifndef DOG_H
#define DOG_H
#include <stddef.h>  /* For NULL */
/**
* struct dog - structure to define a dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
/* Function prototypes */
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
