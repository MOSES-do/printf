#include "main.h"

/**
 * printf_string - prints string
 * @val: parameter
 * Return: len
 *
 */

int printf_string(va_list val)
{
	char *str;
	int i, len;

	str = va_arg(val, char*);

	if (str == NULL || str != NULL)
	{
		len = _strlen(str);
		for (i = 0; str[i] != '\0'; i++)
<<<<<<< HEAD
			_putchar(str[i]);
	}
	return (len);
}
=======
		_putchar(str[i]);
	}
	return (len);
}

>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
