#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers -  a function that prints numbers, followed by a new line.
 * @separator: char, require parameter, is separator
 * @n: unsigned int, require parameter
 * @...: A variable number of numbers to be printed.
 * Return: int, 0 if n == 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	va_end(ap);
	printf("\n");
}
