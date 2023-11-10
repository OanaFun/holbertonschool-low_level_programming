#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings upto n number of bytes
 *
 * @s1: the first string to concatenate to. 'NULL will return if empty.
 * @s2: the second string to copy from. 'NULL' will return if empty.
 * @n: the maximum number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to a newly allocated space in memory
 * which contains s1, followed by the n bytes of s2,
 * and null terminated.
 * NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		len = i + j;
	else
		len = i + n;
	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);

	j = 0;
	while (k < len)
	{
		if (k <= i)
			concat[k] = s1[k];
		if (k >= i)
		{
			concat[k] = s2[j];
			j++;
		}
		k++;
	}
	concat[k] = '\0';
	return (concat);
}
