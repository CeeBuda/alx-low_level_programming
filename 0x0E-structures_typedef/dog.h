#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data type for storing dog details
 * @name: dog name
 * @owner: dog owner
 * @age: how old is the dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */