#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - print a name
 *
 * @name: input string or input name to print
 * @f: function pointer to send the name to
 *
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
