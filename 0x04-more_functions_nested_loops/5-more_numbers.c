#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print number from 0 to 14
 * Return: anything.
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;


	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
	
		_putchar('\n');
		j++;
	}
}
