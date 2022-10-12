#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d: struct dog
 * @name: name attribute to assign
 * @age: age attribute to assign
 * @owner: owner attribute to assign
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
