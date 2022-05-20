#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a data structure for a dog
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
/* init_dog prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* print_dog prototype */
void print_dog(struct dog *d);

#endif /* DOG_H */
