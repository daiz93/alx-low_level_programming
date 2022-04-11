#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: dog to init
 * @name: char
 * @age: int
 * @owner: char
 * Return: noting
 */

void print_dog(struct dog *d);
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
