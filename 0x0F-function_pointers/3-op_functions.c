#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return sum of a and b.
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Return difference of  a and b
 * @a: first number
 * @b: second number
 * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Return product of a and b
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Return quotient of two numbers, a and b
 * @a: first number
 * @b: second number
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - Return remainder of the division a and b
 * @a: first number
 * @b: second number
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
