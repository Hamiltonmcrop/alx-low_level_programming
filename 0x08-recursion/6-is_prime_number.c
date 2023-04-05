#include "main.h"

/**
 * is_divisible - Checks if a number is divisible.
 * @number: Number.
 * @divisor: Divisor.
 *
 * Return: 0 if Divisible  Return 1 if in-divisible.
 *   
 */

int is_divisible(int number, int divisor)
{
	if (number % divisor == 0)
		return (0);

	if (divisor == number / 2)
		return (1);

	return (is_divisible(number, divisor + 1));
}

/**
 * is_prime_number - Check if int is a prime number.
 * @n: Number.
 *
 * Return: 0 - If the integer is not prime 
 *         1- If the number is prime.
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, divisor));
}
