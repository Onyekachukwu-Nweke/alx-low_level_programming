#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print-dog - function that prints a struct dog
 * @d - structure pointer variable
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != 0 ? d->name : "(nill)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner != 0 ? d->owner : "(nill)");
	}
}
