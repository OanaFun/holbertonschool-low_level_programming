#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string to be checked
 * @c: the character to be searched in the string
 *
 * Return: a pointer to the first occurence of the character c in the string s
 * or 0 if the character is not found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
