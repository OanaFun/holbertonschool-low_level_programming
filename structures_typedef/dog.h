#ifndef DOG_H
#define DOG_H
/**
 * struct dog - description for a dog
 * @name: dog's name
 * @age: age of the dog in decimal
 * @owner: owner's name
 *
 * Description: the attributes of a dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dot_t - defines a new name for type struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
