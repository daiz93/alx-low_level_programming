#include <stdio.h>

/**
 * main - une fonction qui affiche les 9 premiers nombres.
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');

	return (0);
}
