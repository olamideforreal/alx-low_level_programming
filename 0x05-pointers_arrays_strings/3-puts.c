#include "main.h"
/**
 * _puts - puts a string followed by a new line
 * Retur: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
