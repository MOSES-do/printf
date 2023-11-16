#include "main.h"

/**
* _printf - Prototype of print_f Function
* @format: varidic args
* Return: len of string passed
*/

int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	char ch;
	const char *ptr;

	va_list list_args;

	va_start(list_args, format);

	if (format == NULL)
		return (-1);

	ptr = format;

	while (ptr[i])
	{
		if ((format[i] == '%' && format[i + 1] == '%')
		|| (format[i] != '%' &&  format[i - 1] != '%'))
		{
			putchar(format[i]);
			len++;
		}
		if (format[i] == 'c' && format[i - 1] == '%')
		{
			ch = va_arg(list_args, int);
			printCh(ch);
		}
		else if ((format[i] == 's' && format[i - 1] == '%')
			|| (format[i] == 'S' && format[i - 1] == '%'))
		{
			printStr(list_args);
		}
	i++;
	}
	return (len);
}


