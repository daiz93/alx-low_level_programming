#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc !=3 )
	{
		printf("erreur");
	}
	else
	{
		if (isdigit(argv[1]) && isdigit(argv[2]))
		{
			printf("%d", argv[1] * argv[2];
		}
		else
		{
			printf("Erreur");
		}
	}
	return (0);
}
