#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strlen - Return the lenght of a string
*@s: Poiter of the character
*Return: The length of a string
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
* *_strcpy - Copy the string pointed
*@dest: copy of the string
*@src: Origin of the string
*Return: Dest destine copie
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
* new_dog - Function that creates a new dog
*@name: Name of the dog
*@age: Age of the dog
*@owner: Name of owner of the dog
*Return: Dog created
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cname, *cowner;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);

	cname = malloc(sizeof(char *) * (_strlen(name) + 1));

	if (cname == NULL)
	{
		free(cname);
		free(new_dog);
		return (NULL);
	}

	cname = _strcpy(cname, name);

	cowner = malloc(sizeof(char *) * (_strlen(owner) + 1));
	if (cowner == NULL)
	{
		free(cowner);
		free(cname);
		free(new_dog);
		return (NULL);
	}

	cowner = _strcpy(cowner, owner);

	new_dog->name = cname;
	new_dog->age = age;
	new_dog->owner = cowner;

	return (new_dog);
}
