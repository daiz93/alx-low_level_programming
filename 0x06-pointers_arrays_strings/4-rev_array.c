#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
char tmp;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while a[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	if (len == n)
	{
		for (i = 0; i < len; i++)
		{
			tmp = a[i];
			a[i] = a[len1];
			a[len1--] = tmp;
		}
	}
}
