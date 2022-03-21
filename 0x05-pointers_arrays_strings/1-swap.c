#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function tha sawp int 
 *
 * @a: int 1
 * @b: int 2
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
