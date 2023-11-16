#include "main.h"

/**
 * _printf - selects the correct function to print
 * @format: parameter
 * Return: len
 */

int _printf(const char *format, ...)
{
	Hind h[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", print_37},
		{"%i", printi}, {"%d", printd}, {"%r", print_rev},
		{"%R", print_rot13}, {"%b", printb},
		{"%u", print_unsigned},
		{"%o", print_octa}, {"%x", print_hexa}, {"%X", print_HEXA},
		{"%S", print_exc_string}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (h[j].ph[0] == format[i] && h[j].ph[1] == format[i + 1])
			{
				len += h[j].fp(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}

