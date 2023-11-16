#include "main.h"

/**
 * print_octa - convert to octa
 * @val: parameter
 * Return: j
 *
 */

int print_octa(va_list val)
{
	int i, j = 0;
	int *array;
	unsigned int q = va_arg(val, unsigned int);
	unsigned int temp = q;

	while (q / 8 != 0)
	{
		q = q / 8;
		j++;
	}
	j++;
	array = malloc(sizeof(int) * j);
	for (i = 0 ; i < j ; i++)
	{
		array[i] = temp % 8;
		temp = temp / 8;
	}
	for (i = j - 1 ; i >= 0 ; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (j);
}

