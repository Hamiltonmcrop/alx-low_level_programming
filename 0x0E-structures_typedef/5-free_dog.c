#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - Function that frees dogs
*@d: Dog to free
*Return: Nothing
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
