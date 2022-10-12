#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog object
 * @name: name attribute to assign
 * @age: age attribute to assign
 * @owner: owner attribute to assign
 *
 * Return: dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *some_dog = malloc(sizeof(dog_t));
if (name)
{
some_dog->name = name;
}
if (age)
{
some_dog->age = age;
}
if (owner)
{
some_dog->owner = owner;
}
return (some_dog);
}
