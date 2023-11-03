#include "main.h"
/**
 * check_prime - checks if a number is prime
 *
 * @n: the integer number to be checked
 * @i: number that iterates from 1 to n
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
*/
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	else if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: the integer number to be checked
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
