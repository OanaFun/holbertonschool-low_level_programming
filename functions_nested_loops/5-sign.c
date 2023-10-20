#include "main.h"
/**
* print_sign - check for alphabetic character
*
* @n: number to check
*
* Return: 1 and print + if n is greater than 0,
* 0 and print 0 if n is zero
* -1 and print - if n is less than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
