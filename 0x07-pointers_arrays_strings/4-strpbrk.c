#include "main.h"

/**
 * _strpbrk - Search for a  set of bytes.
 * @s: Searched string.
 * @accept: Searched bytes.
 *
 * Return: Null If no set is matched .
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
