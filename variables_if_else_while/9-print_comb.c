#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: 0 when successful
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
