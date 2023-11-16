#include "main.h"

/**
 * print_pointer - prints pointer
 * @val: parameter
 * Return: q + 2
 *
 */

int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	int j;
	long int i, q;

	p = va_arg(val, void*);

	if (p == NULL)
	{
		for (j = 0 ; s[j] != 0 ; j++)
		{
			_putchar(s[j]);
		}
		return (j);
	}
	i = (unsigned long int)p;
	_putchar ('0');
	_putchar ('x');
	q = print_hex_more(i);
	return (q + 2);
}
=======
return (q + 2);
}
