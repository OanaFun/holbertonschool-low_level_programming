#include "main.h"
/**
 * _sqrt - returns the natural square root of a number
 *
 * @n: number to calculate the natural square root
 * @i: number that iterates from 1 to n
 *
 * Return: -1 if n does not have a natural square,
 * the natural square root
*/
int _sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	else if ((i * i) == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
