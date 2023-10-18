#include <stdio.h>
/**
 * main - print the numbers of base 16 in lowercase
 *
 * Return: 0 when successful
*/
int main(void)
{
	int num, alpha;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
