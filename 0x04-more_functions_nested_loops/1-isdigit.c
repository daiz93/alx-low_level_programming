#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if c is digit
 * @c: char to check
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isdigit(int c)
{
	int n = 0;

	if (c >= 48 && c <= 57)
	{
		n = 1;
	}
	return (n);
}
