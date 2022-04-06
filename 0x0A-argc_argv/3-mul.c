#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


/** isnumber - check if an string is number or not
 *@s: char
 *
 *Return: int 1 (success), 0 (failure)
 */


int isnumber(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (isdigit(s[i]) == 0 && putchar(s[i]) != '-' && putchar(s[i]) != '+')
		{
			return (0);
		}
		i++;
	}
    return (1);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] == '+')
			i++;

		if (s[i] >= '0' && s[i] <= '9' && s[i] != '+')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - a program that multuplies two number.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 1 (Success)
 */

int main(int argc, char *argv[])
{

	int n1, n2, r0;

	if (argc == 3 && isnumber(argv[1]) == 1 && isnumber(argv[2]) == 1)
	{
		n1 = _atoi(argv[1]);
		n2 = _atoi(argv[2]);
		r0 = n1 * n2;
		printf("%d\n", r0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
