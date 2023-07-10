#include "dog.h"
#include "main.h"
#include <stdio.h>
/**
 * init_dog - function that initializes a variable of type  struct dog
 *
 * @d: pointer to the struct dohg to initialize function
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: dog's owner's name
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
