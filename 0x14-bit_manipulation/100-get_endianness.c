#include "main.h"

/**
 * binary_to_uint - onverts a binary number to an unsigned int.
 * @b: binarry to convert
 *
 * Return: nsigned int, converted number (success), 0(faild)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return ((int)*c);
}
