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
<<<<<<< HEAD
=======
	
>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
	i = (unsigned long int)p;
	_putchar ('0');
	_putchar ('x');
	q = print_hex_more(i);
<<<<<<< HEAD
	return (q + 2);
}
=======
return (q + 2);
}

>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
