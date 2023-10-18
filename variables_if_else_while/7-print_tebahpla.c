#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse
 *
 * Return: 0 when successful
*/
int main(void)
{
	char revalph;

	for (revalph = 'z'; revalph >= 'a'; --revalph)
	{
		putchar(revalph);
	}
	putchar('\n');
	return (0);
}
