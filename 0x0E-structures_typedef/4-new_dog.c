#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function  that creates a new dog
 * @name: element of dog tells name
 * @age: element of dog tells age
 * @owner: element of dog tells owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d = malloc(sizeof(dog_t));
if (d == NULL)
{
return (NULL);
}

d->name = strdup(name);
if (d->name == NULL)
{
free(d);
return (NULL);
}

d->age = age;

d->owner = strdup(owner);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}

return (d);
}
