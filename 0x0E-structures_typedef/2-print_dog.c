#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: dog struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nill)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nill)");
	}
}
