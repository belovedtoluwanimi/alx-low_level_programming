#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */

void _puts(char *str)
{
	while( *str != '\0')
	{
		_puts(*str++);
	}
	_puts('\n');
}
