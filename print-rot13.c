#include "main.h"

<<<<<<< HEAD
=======

>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
/**
 * print_rot13 - covert to 13
 * @val: parameter
 * Return: value
 */

<<<<<<< HEAD
=======

>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
int print_rot13(va_list val)
{
	int i, q, value = 0;
	int j = 0;
<<<<<<< HEAD
	char *s = va_arg(val, char*);
=======
	char *s = va_arg(val, char *);
>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
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
