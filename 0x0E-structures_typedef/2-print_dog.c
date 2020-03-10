#include "dog.h"
#include <stdio.h>
#define dNULL "(nil)"
/**
 * print_dog - print dog's structure.
 * @d: parameter where dog came from.
 *
 * Return: always 0.
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

printf("Name: %s\n", (d->name != NULL ? d->name : dNULL));
printf("Age: %f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL ? d->owner : dNULL));

}
