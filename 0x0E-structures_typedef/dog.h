#ifndef DOGPOPPY
#define DOGPOPPY

/**
 * struct dog - struct dog Poppy.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: owner of the dog.
 */

typedef struct dog dog_t;

/**
 * dog_t - typedef of dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
