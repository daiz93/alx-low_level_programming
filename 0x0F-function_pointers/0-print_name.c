#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: name to print
 * @f: function that print name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
