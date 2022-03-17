#include "main.h"
#include <stdio.h>

/**
 * print_numbers - check if c is digit
 * @a: first number
 * @b: second number
 * Return: always return 0;
 */

int print_numbers(void)
{
	int i = 0;

	for(i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
	return (0);
}
