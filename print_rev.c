#include "main.h"

/**
 * print_rev - print reverse function
 * @val: print reverse value
 * Return - void
 *
 */

int print_rev(va_list val)
{
	int count = 0;
	char *s = va_arg(val, char*);
	int i = 0;

	if (s == NULL)
		s  = "(null)";
	while (s[i] != '\0')
	{
		count++;
	}
	for (i = count - 1 ; s[i] != '\0' ; i--)
	{
		_putchar(s[i]);
	}
	return (count);
}
