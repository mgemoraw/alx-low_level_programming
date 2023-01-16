#include "dog.h"
#include <stdio.h>

/**
* print_dog - function prints dog
* @d: structure dog
* Return: retrns nothing
*/
void print_dog(struct dog *d)
{
if (d == NULL)
printf("nothing");

if (d->name == NULL)
d->name = "(nil)";

if (d->age == 0)
d->age = 0.0;

if (d->owner == NULL)
d->owner = "(nil)";

printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
return;
}
