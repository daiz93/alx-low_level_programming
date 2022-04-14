#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_numbers -  a function that prints numbers, followed by a new line.
 * @separator: char, require parameter, is separator
 * @n: unsigned int, require parameter
 * Return: int, 0 if n == 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	if (n == 0)
		return;
	if (separator == NULL)
		return;
	va_start(ap, n);
	for (i = 0; i < n ; i++)
	{
		num = va_arg(ap, int);
		if (i > 0 && separator != NULL)
		{	
			_putchar(*separator);
		}
		printf("%d", num);
		
	}	
	va_end(ap);
}

