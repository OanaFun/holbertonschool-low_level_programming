#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compare two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: the result of the comparison
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
