#include <stdio.h>
#include "main.h"
/**
 * print_rev - print a string in reverse, followed by a new line
 *
 * @s: pointer to string
 *
*/
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
