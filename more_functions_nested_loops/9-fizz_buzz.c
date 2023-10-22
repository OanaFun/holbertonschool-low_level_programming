#include <stdio.h>
/**
 * main - print the numbers from 1 to 100 followed by a new line
 * print 'Fizz' instead of the number for the multiples of 3
 * 'Buzz' for the multiples of 5
 * 'FiveBuzz' for the multiples of both 3 and 5
 *
 * Return: 0 when successful
*/
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
