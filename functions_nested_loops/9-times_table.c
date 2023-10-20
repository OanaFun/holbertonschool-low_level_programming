#include "main.h"
/**
* times_table - print 9 times starting with 0
*
* Return: 0 when successful
*/
void times_table(void)
{
	int row, column, num;

	row = 0;
	do {
		column = 0;
		do {
			num = row * column;
			if (num >= 10)
				_putchar((num / 10) + '0');
			else if (num < 10 && column != 0)
				_putchar(' ');
			_putchar((num % 10) + '0');
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			column++;
		} while (column < 10);
		_putchar('\n');
		row++;
	} while (row < 10);
	_putchar(',');
	_putchar(' ');
	_putchar((num / 10) + '0');
	_putchar((num % 10) + '0');
}
