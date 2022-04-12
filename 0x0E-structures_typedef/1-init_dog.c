#include "dog.h"

/**
 * init_dog - initialia=zes a var of type struct dog
 * @d: struct dog
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 *
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
