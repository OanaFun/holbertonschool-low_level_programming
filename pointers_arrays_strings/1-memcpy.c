#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to the memory location where the copied data will be stored
 * @src: pointer to the memory location from where is to be copied
 * @n: number of bytes to be copied
 *
 * Return: a pointer to the memory location where data is copied (dest)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
