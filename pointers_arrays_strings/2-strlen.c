#include "main.h"
#include <stdio.h>
/**
 * _strlen - return the length of a string
 *
 * @s: string to calculate the length
 *
 * @length: length of the string
 *
 * Return - return the length of the string s
 *
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
