#include "main.h"

/**
 * print_rev - print reverse function
 * @val: print reverse value
 * Return: void
 *
 */

int print_rev(va_list val)
{
	char *s = va_arg(val, char*);
	int i;
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = count - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
		return (count);
	}
	return (count);
}

