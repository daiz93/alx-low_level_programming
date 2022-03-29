#include "main.h"

/**
 * _strchr - locate char in string
 * @s: string that contain c
 * @c: char to find
 * Return: a pointer to char c
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *found;
	*found = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			found = &s[i];
			break;
		i++;
	}
	return (found);
}
