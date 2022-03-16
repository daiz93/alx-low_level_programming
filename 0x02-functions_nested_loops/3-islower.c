#include "main.h"

/**
 * _islower - check if is lowercase
 * return: int
 */
int _islower(int c)
{
	int ret = 0;
	int i = 97;

	while (i <= 122)
	{
		if (c == i)
		{
			ret = 1;
		}
		i++;
	}
	return(ret);
}
