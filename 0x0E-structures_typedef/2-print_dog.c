#include "dog.h"
#include <stdio.h>

/**
 * print_dog- used to print dog element
 * @d: element pass
 * Return: null if d is empty
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.2f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
