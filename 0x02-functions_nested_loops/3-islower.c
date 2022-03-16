#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int ret = 0;
	int i = 97;

	while (i <= 122)
	{
		if (c == i)
		{
			ret = 1;
		}
		i++;
	}
	return (ret);
}
