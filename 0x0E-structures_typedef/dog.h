#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for custom type dog
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 *
 * Description: initialiser for a custom type "dog"
 * with attributes name, owner and age
 */
struct dog
{
char *name;
char *owner;
float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
