#include "main.h"


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
			putchar(str[i]);
		return (len);
	}
	else
	{
		len = strlen(str);
		for (i = 0 ; i < len ; i++)
			putchar(str[i]);
		return (len);
	}
}

