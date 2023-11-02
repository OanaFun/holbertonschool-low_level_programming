#include "main.h"
/**
 * factorial - calculate the factorial of a given number
 * @n: the number to calculate the factorial
 *
 * Return: integer value, or -1 to indicate an error
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
