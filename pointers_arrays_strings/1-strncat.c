#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenate two strings
 *
 * @dest: pointer to destination string
 *
 * @src: pointer to source string
 *
 * @n: bytes from source string
 *
 * Return: pointer to the resulting string  dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < n && src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
