#include "main.h"

/**
 * print_exc_string - custom conversion specifier
 * @val: parameter
 * Return: len
 *
 */

int print_exc_string(va_list val)
{
	char *s;
	int i, len = 0;
	int j;

	s = va_arg(val, char*);
	if (s == NULL)
		s = "(null)";
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			j = s[i];
			if (j < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_more(j);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
<<<<<<< HEAD
=======

>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
