#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: pointer to string
 *
*/
void rev_string(char *s)
{
	int i, length = 0;
	int start, end;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	end = length - 1;
	for (start = 0; start < (length / 2); start++)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		end--;
	}
}
