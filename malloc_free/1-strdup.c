#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a new string
 * which is a duplicate of the string parameter str
 *
 * @str: the source string
 *
 * Return: pointer to the duplicated string,
 * or NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	int i, len = 0;
	char *copy;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}
