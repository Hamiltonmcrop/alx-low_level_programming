#include "main.h"

/**
 * *_memcpy - Copy the memory area.
 * @dest: Area of memory.
 * @src: Source.
 * @n: Length of src lenght.
 *
 * Return: Dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
