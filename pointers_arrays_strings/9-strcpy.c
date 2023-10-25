#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copy the string pointed to by src
 * including the terminating null byte '\0'
 * to the buffer pointed to by dest
 *
 * @dest: the pointer to the destination array
 * where the content is to be copied
 *
 * @src: the string to be copied
 *
 * Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
