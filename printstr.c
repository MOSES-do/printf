#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
* printStr - function to parse string
* @arg: format specifiers to check
* Return: Always len
*/
int printStr(va_list arg)
{
	char *str;
	int i;
	int len;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = strlen(str);
		for (i = 0 ; i < len ; i++)
			_putchar(str[i]);
		return (len);
	}
}

