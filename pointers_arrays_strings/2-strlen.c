#include "main.h"
#include <stdio.h>
/**
 * _strlen - function returns the length of a string
 *
 * @s: string to calculate the length
 *
 * Return - return the length of s
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
