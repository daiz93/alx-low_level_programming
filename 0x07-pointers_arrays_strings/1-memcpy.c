#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination of copying
 * @src: char to copying
 * @n: int
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
