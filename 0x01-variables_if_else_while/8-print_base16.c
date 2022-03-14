#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 102; ch++)
	{
		if (ch < 58 || ch >= 97)
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
