#include "function_pointers.h"

/**
 * array_iterator - iterate element of array.
 * @array: poiter to int
 * @size: size of array
 * @action: function to a pointer
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
