#include <stdio.h>
/**
 * main - print all digit numbers of base 10 starting from 0
 *
 * Return: 0 when successful
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num % 10 + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
