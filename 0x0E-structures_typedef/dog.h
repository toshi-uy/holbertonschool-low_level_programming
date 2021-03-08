#ifndef DOG
#define DOG

/**
 * struct dog - structure for dog
 * @name: First member
 * @owner: Second member
 * @age: third member
 *
 * Description: structure used to descrube name owner and age of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
/**
 * dog_t - Typedef for structure dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
