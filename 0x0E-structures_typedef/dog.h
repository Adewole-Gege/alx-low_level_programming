#ifndef DOG_H
#define DOG_H
/**
* struct dog - a structure that stores a dog's basic info
* @name: name of the dog (type = char *)
* @age: age of the dog (type = float)
* @owner: owner of the dog (type = char *)
*/
#include <stddef.h> /* For NULL */
#include <stdlib.h> /* For malloc, free */
struct dog
{
char *name;
float age;
char *owner;
};
/* New type definition */
typedef struct dog dog_t;
/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
