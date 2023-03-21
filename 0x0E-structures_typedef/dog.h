#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog
 * @name : name of dog
 * @age : age of dog
 * @owner : the owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
