#include "main.h"
/**
 * print_line - draw a straight line in the terminal
 *
 * @n: the number of times the character '_' should be printed
 *
 * Return: 0 when successful
*/
void print_line(int n)
{
	int x;

	if  (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
	 _putchar('\n');
	}
}
