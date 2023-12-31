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
	unsigned int i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		n = j;
	concat = malloc(sizeof(char) * (i + n + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j != n; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
