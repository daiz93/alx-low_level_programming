#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print digit 0 to 9 without 2 and 4
 * Return: anything.
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4) 
		_putchar(i + 48);
	}
	_putchar('\n');
}
