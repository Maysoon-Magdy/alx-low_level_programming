#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic struct
 * @name: first attribute
 * @age: second attribute
 * @owner: third attribute
 *
 * Description: this is the dog basic info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
