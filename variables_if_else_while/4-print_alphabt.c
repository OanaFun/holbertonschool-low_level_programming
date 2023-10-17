#include <stdio.h>
/**
 * main - print the alphabet in lowercase except q and e
 *
 * Return: 0 when successful
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'c')
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
