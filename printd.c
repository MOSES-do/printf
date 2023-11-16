#include "main.h"

/**
 * printd - prints integers
 * @arg: argument
 * Return: 1
 */

int printd(va_list arg)
{
	int n = va_arg(arg, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

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
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
<<<<<<< HEAD
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
#include "main.h"

/**
 * printi - prints integers
 * @arg: argument
 * Return: 1
 */

int printi(va_list arg)
{
	int n = va_arg(arg, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
=======
		i++;
>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
		}
	}
	_putchar(last + '0');

	return (i);
}
<<<<<<< HEAD
=======

>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
