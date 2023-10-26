#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copy a string
 *
 * @dest: pointer to destination string
 *
 * @src: pointer to source string
 *
 * @n: bytes from source string
 *
 * Return: pointer to the resulting string  dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n && dest[i] != '\0'; i++)
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
