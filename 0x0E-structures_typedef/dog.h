#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a strctre of dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} n_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
