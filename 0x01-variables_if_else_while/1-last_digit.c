#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * assign a random number to the variable n  
 * get last gigit in string variable
 * print the message
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, digit);
	}
	else if (digit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, digit);	
	}
	else if (digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, digit);	
	}
	return (0);
}
