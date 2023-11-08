#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by the
 * contents of s2, and null terminated.
 * NULL on failure
 *
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0, len3;
	char *result;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}
	len3 = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len3 + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		result[i] = s2[j];
	result[len3] = '\0';
	return (result);
}
