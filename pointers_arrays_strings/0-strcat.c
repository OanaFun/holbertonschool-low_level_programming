#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenate two strings
 *
 * @dest: pointer to destination string
 *
 * @src: pointer to source string
 *
 * Return: pointer to the resulting string  dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 1; src[i] != '0'; i++)
	{
		;
	}
	for (j = 0; dest[j] != '\0'; i++, j++)
	{
		src[i] = dest[j];
	}
	src[i] = '\0';
	return (dest);
}
