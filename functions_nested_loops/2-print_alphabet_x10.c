#include "main.h"
/**
* print_alphabet_x10 - print 10 times the alphabet in lowercase
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char alphabet;

	while (i++ < 10)
	{
		alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}
}
