#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
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

	copy = malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}
/**
 * new_dog - create a new dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: NULL if the function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *cpy_name, *cpy_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	cpy_name = _strdup(name);
	cpy_owner = _strdup(owner);
	if (cpy_name == NULL || cpy_owner == NULL)
	{
		free(dog);
		free(cpy_name);
		free(cpy_owner);
		return (NULL);
	}
	dog->name = cpy_name;
	dog->age = age;
	dog->owner = cpy_owner;
	return (dog);
}
