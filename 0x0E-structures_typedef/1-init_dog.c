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

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
