#ifndef dog_h
#define dog_h

/**
 * struct dog - Structure for a dog
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Description: A structure with elements
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
