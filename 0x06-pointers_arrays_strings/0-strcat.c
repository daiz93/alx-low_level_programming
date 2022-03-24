#include "main.h"

/**
 * _strcat - concat string
 * @dest: string to concat
 * @src: string 2 to concat
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len, i, len1;

	len = 0;
	len1 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
