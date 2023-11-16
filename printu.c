#include "main.h"

/**
 * print_unsigned - prints integers
 * @arg: argument
 * Return: 1
 */

int print_unsigned(va_list arg)
{
	unsigned int n = va_arg(arg, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;
<<<<<<< HEAD

=======
>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
<<<<<<< HEAD
		i++;
=======
	i++;
>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
<<<<<<< HEAD
			exp = exp * 10;
			num = num / 10;
=======
		exp = exp * 10;
		num = num / 10;
>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
<<<<<<< HEAD

	return (i);
}
=======
	return (i);
}

>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
