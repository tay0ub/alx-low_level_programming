#include "main.h"

/*
 * task 6
 */

/**
 * is_prime_number -  returns 1 if the input integer is a prime
 * 		      number, otherwise return 0
 * @n: the integer
 * Return: integer value
 */

int is_prime_number(int n)
{
	if ((n == 1) || (n < 0))
		return (0);

	else
		return (prime(2, n));
}

/**
 * prim - prime num or not
 * @a: iterator 
 * @n: the number
 * Return: 1 if n is prime else 0
 */

int prime(int i, int n)
{
	if (n == i)
		return (1);

	else if ((n % i) == 0)
		return (0);

	return (prime(i + 1, n));
}
