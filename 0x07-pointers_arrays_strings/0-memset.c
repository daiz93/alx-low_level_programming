#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: char
 * @b: char
 * @n: int
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;
	unsigned int i = 0;

	while (s[k] != '\0')
		k++;
	if (n < k)
	{
		n = k;
	}

	for (i = 0 ; i < n; i++)
		s[i] = '0' + b;
	
	return s;
}
