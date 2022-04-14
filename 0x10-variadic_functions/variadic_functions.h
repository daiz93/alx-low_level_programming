#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


int _putchar(char c);
void _print_char(va_list arg);
void _print_int(va_list arg);
void _print_float(va_list arg);
void _print_string(va_list arg);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif



