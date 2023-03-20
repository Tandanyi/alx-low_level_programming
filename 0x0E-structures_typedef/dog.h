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
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
