#include "function_pointers.h"

/**
 * int_index - index of found integer.
 * @array: poiter to int
 * @size: size of array
 * @cmp: is a pointer to the function to be used to compare value
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
			return (i);
		i++;
	}

	return (-1);
}

