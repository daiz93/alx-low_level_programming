#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate char in string
 * @s: string that contain c
 * @c: char to find
 * Return: a pointer to char c
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
