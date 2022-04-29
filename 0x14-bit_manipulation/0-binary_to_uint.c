#include "main.h"
/**
 * puissance2 - get power of 2
 * @i: number of mul 2
 *
 * Return: power
 */

int puissance2(unsigned int i)
{
	if (i == 0)
	{
		return (1);
	}
	if (i > 0)
	{
		return (2 * puissance2(i -1));
	}
	else
	{
		return (0);
	}
}
/**
 * len - get length of string
 * @c: string
 *
 * Return: len
 */

unsigned int _len(const char *c)
{
	int i = 0;

	if (c)
	{
		while (c[i] != '\0')
		{
			i++;
		}
	}
	return (i);
}

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int
 * @b: binarry to convert
 *
 * Return: nsigned int, converted number (success), 0(faild)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int result = 0;
	int lenn = _len (b);

	if (b)
	{
		while(b[i] != '\0')
		{
			if ((b[i] != '0') & (b[i] != '1'))
			{
				return (0);
			}
			if (b[i] == '1')
			{
				result += puissance2(lenn - i - 1);
			}
			i++;
		}
		return (result);
	}
	else
	{
		return (0);
	}
}
