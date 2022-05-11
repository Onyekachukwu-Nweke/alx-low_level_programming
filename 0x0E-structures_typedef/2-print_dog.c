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
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		(*d).name != NULL ? d->name : "(nil)",
		(*d).age < 0 ? d->age : "(nil)",
		(*d).owner != NULL ? d->owner : "(nil)");
	}
}
