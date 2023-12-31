#include "main.h"
/**
 * print_diagonal - draw a diagonal line on the terminal
 *
 * @n: the number of times the character '\' should be printed
 *
 * Return: 0 when successful
*/
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
