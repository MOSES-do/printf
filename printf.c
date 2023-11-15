#include "main.h"


/**
* _printf - printf prototype
* @format: string to parse
* Returrn: Length of string
*
*/

int _printf(const char *format, ...)
{
	int i = 0, len = 0;

	va_list list_args;

	va_start(list_args, format);

	while (format[i])
	{
		if ((format[i] != 'd' && format[i - 1] != '%')
			|| (format[i] != 'c' && format[i - 1] != '%')
			|| (format[i] != 's' && format[i - 1] != '%')
			|| (format[i] != 'i' && format[i - 1] != '%'))
		{

		if (format[i] != '%')
			printf("%c", format[i]);
		len++;
		}

		if (format[i] == '%' && format[i + 1] == 'd')
			printf("%d", va_arg(list_args, int));
		if (format[i] ==  '%' && format[i + 1] == 'c')
			printf("%c", va_arg(list_args, int));
		if (format[i] == '%' && format[i + 1] == 's')
			printf("%s", va_arg(list_args, char *));
		if (format[i] == '%' && format[i + 1] == 'i')
			printf("%i", va_arg(list_args, int));

	va_end(list_args);
	i++;
	}

	return (len);
}
