#include "dog.h"

/**
 * init_dog - initialising a struct
 * @d: pointer to a struct member
 * @name: name of the dog
 * @age: how old is the dog
 * @owner: who owns the dog
 *
 * Return: void (returns nothing);
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
