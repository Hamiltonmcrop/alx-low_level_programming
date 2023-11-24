#include "main.h"
/**
 * get_bit - gets bit of an index
 * @n: number through
 * @index: index through
 * Return: integer value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
