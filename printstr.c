#include "_putchar.c"

/**
* printStr - function to parse string
* @args: format specifiers to check
* Return: Always len
*/
int printStr(va_list args)
{
	char *str;
	int i;
	int len;

	str = va_arg(args, char *);
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

