#include "main.h"

/**
 * print_rev - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
