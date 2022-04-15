#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <string.h>

/**
 * @opsym: the member pointing to operator symbols
 * @f: member pointer to function
 */

typedef struct opfunc
{
	char *opsym;
	void (*f)(va_list);
} fname_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif



