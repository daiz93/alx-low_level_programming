#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print struct dog
 *
 * @d: dog to init
 * Return: noting
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(Nil)";
		if (d->owner == NULL)
			d->owner = "(Nil)";

		printf("Name:%s\n",d->name);
		printf("Age:%s\n",d->age);
		printf("Owner:%s\n",d->owner);
	}
}
