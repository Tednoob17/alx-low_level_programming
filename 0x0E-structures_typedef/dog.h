#ifndef _DOG_H_
#define _DOG_H_

/**
 *dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - struct who will doing store dog information
 *@name : it's a name of dog
 *@age : it's a age of dog
 *@owner : the owner dog name
 *
 *Description : this struct call a dog type for who store her name
 *her age and her owner name
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


#endif
