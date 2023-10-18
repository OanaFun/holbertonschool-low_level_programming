#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase followed by a new
 *
 * Return: 0 when successful
*/
void print_alphabet(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
	_putchar(alphabet);
	alphabet++;
}
	_putchar('\n');
}
