#include "main.h"
#include <stdio.h>
/**
 * _strlen - function returns the length of a string
 *
 * @s: string to calculate the length
 *
 * Return: return the value of '_strlen'
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
