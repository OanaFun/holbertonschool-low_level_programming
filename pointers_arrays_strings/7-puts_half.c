#include "main.h"
/**
 * puts_half - print the second half of the string
 * followed by a new line
 *
 * @str: pointer to string
 *
*/
void puts_half(char *str)
{
	int i, length, middle;

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	middle = length / 2;
	if (i % 2 == 1)
	{
		middle = ((length + 1) / 2);
	}
	for (i = middle; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
