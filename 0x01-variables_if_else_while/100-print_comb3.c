#include <stdio.h>

/**
 * main - a program that prints all possible different combinations of two digits,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			
			putchar(i);
			putchar(j);
			if (i != 56 && j != 57)
			{
				putchar(',');
				putchar(' ');
			}

		}
		
	}
	putchar('\n');
	return (0);
}
