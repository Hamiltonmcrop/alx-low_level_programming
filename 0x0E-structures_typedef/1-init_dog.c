#include "dog.h"
#include <stdio.h>
/**
* init_dog - Initialize a dog
*@d: Name of  the structure
*@name: Name of the dog
*@age: Age of the dog
*@owner: Owner's name of the dog
*Return: 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
