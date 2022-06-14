#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if c is upper
 * @c: char to check
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int n = 0;

	if (c >= 65 && c <= 90)
	{
		n = 1;
	}
	return (n);
}
