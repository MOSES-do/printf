#include "main.h"

/**
 * print_HEXA - convert to hexa
 * @val: parameter
 * Return: j
 *
 */

int print_HEXA(va_list val)
{
	int i, j = 0;
	int *array;
	unsigned int q = va_arg(val, unsigned int);
	unsigned int temp = q;

	while (q / 16 != 0)
	{
		q = q / 16;
		j++;
	}
	j++;
	array = malloc(sizeof(int) * j);

	for (i = 0 ; i < j ; i++)
	{
		array[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = j - 1 ; i >= 0 ; i--)
	{
		if (array[i] > 9)
<<<<<<< HEAD
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
=======
		{
			array[i] = array[i] + 7;
			_putchar(array[i] + '0');
		}
>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
	}
	free(array);
	return (j);
}
<<<<<<< HEAD
=======

>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
