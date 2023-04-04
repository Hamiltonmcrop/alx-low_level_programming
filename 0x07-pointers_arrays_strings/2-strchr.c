#include "main.h"

/**
 * _strchr - Determine a char in a string.
 * @s: Searched string.
 * @c: Searched char.
 *
 * Return: Null If c is not found.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
