#include "main.h"

/**
 * printf_char - print a character
 * @val: argument
 * Return: 1.
 */

int printf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
<<<<<<< HEAD
=======

>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
