# include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: the input number to multiply
 * @y: the power number
 *
 * Return: -1 if y is lower than 0, 1 if y is equal to 1
 * the input number multiplied y times
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
