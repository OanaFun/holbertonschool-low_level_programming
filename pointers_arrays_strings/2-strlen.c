#include "main.h"
/**
 * _strlen - return the length of a string
 *
 * @s: string to calculate the length
 *
 * Return - return the length of the string
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