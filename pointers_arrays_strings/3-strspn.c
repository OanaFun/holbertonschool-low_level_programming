#include "main.h"
/**
 * _strspn - calculates the length in bytes of the initial segment of s string
 * which consists only of bytes in accept string
 *
 * @s: the main string to be scanned
 * @accept: string of bytes to compare with
 *
 * Return:  the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
