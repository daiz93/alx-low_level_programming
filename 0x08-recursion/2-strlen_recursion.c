#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: string to get length
 * Return: int, length of s
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
