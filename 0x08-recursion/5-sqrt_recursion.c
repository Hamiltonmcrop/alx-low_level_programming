#include "main.h"

/**
 * find_sqrt - Calculate natural square root of a number.
 * 
 * @number: Number
 * 
 * @root: The root to be tested.
 *
 * Return: The square root.
 */

int find_sqrt(int number, int root)
{
	if ((root * root) == number)
		return (root);

	if (root == number / 2)
		return (-1);

	return (find_sqrt(number, root + 1));
}

/**
 * _sqrt_recursion - Natural square root of a number.
 * 
 * @number: Number
 *
 * Return: Square root if its a natural square root.
 */

int _sqrt_recursion(int number)
{
	int root = 0;

	if (number < 0)
		return (-1);

	if (number == 1)
		return (1);

	return (find_sqrt(number, root));
}
