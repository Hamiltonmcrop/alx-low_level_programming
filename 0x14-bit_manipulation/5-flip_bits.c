#include "main.h"
/**
 * flip_bits - Flip bits
 * @n: 1st number
 * @m: 2nd number
 * Return: unsigned int value of number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips, count = 0;

	flips = n ^ m;
	while (flips > 0)
	{
		count += flips & 1;
		flips >>= 1;
	}
	return (count);
}
