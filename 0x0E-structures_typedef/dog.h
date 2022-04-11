#ifndf DOG_H
#define DOG_H

/**
 * struct dog - description of a dog
 * @name: name of the dog
 * @age: old of the dog
 * @woner: full name of the dog's owner
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;	
}dog;

#endif