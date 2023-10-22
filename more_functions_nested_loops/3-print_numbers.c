#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9, followed by a new line
*/
void print_numbers(void)
{
	char string = '0';

	while (string <= '9')
		{
			_putchar(string);
			string++;
		}
	_putchar('\n');
}
