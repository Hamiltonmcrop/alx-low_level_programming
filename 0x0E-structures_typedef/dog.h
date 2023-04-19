#ifndef DOG
#define DOG
/**
 * struct dog - Dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - typedef for dog
*/
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
