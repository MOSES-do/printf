#include "main.h"

/**
 * printb - print binary
 * @val: parameter
 * Return: count
 *
 */

int printb(va_list val)
{
	int flag = 0;
	int count = 0;
	int j = 1, b, i;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int h;

	for (i = 0 ; i < 32 ; i++)
	{
		h = ((j << (31 - i)) & n);
		if (h >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = (h >> (31 - i));
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0') ;
	}
	return (count);
}
