#include <stdlib.h>
#include "main.h"

/**
* _realloc - Reallocates a memory block.
* @ptr: pointer to the memory previsouly allocated memory.
* @old_size: size of the allocated memory.
* @new_size: new size of memory
* Return: pointer to the newly allocated memory.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *old_ptr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			p1[j] = old_ptr[j];
	}

	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			p1[j] = old_ptr[j];
	}

	free(ptr);
	return (p1);
}
