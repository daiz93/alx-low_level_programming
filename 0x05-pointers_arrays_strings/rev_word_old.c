#include "main.h"

/**
 * rev_string - print string reverse
 * @s: char type pointer
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int _start = 0;
	int _end = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	_end = i - 1;
	_start = i - 1;

	while (_start >= 0 )
	{
		while (s[_start] != ' ' && _start >= 0)
		{
			_start--;
		}
		for (i = _start + 1; i <= _end; i++)
		{
			_putchar(s[i]);
		}
		if (_start > 0)
			_putchar(s[_start]);

		_end = _start - 1;
		_start = _end;
	}

	_putchar('\n');
}
