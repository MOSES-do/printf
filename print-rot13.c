#include "main.h"


/**
 * print_rot13 - covert to 13
 * @val: parameter
 * Return: value
 */


int print_rot13(va_list val)
{
	int i, q, value = 0;
	int j = 0;
	char *s = va_arg(val, char *);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0 ; s[i] != 0 ; i++)
	{
		j = 0;
		for (q = 0 ; a[q] && !j ; q++)
		{
			if (s[i] == a[q])
			{
				_putchar(b[q]);
				value++;
				j = 1;
			}
		}
		if (!j)
		{
			_putchar(s[i]);
			value++;
		}
	}
	return (value);
}
