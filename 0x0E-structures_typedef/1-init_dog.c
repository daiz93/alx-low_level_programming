#include <stdio.h>
#include "dog.h"

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
	(*d).name = *name;
	(*d).age = *age;
	(*d).owner = *owner;
}