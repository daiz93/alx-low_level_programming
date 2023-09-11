#include "main.h"

/**
 * main - print _putchar
 * Return: allways 0.
 */

int main(void)
{
	char string[] = "_putchar";
	int i = 0;

	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
