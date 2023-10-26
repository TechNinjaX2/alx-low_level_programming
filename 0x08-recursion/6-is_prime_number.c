#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if the number is a prime numbers
 * @n: the number 
 * Return: n
 */
int is_prime_number(int n)
{
	n = prime(n, n / 2);
	return (n);
}
int prime(int n, int i)
{
	if (n < 0)
	{
		n = -n;
	}
	if (n == 1)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (prime(n, i - 1));
		}
	}
}
