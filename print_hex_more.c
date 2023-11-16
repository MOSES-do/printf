#include "main.h"

/**
 * print_hex_more - convert to hexa
 * @q: parameter
 * Return: j
 *
 */

int print_hex_more(unsigned long int q)
{
	int i, j = 0;
	int *array;
	unsigned long int temp = q;

	while (q / 16 != 0)
	{
		q = q / 16;
		j++;
	}
	j++;
	array = malloc(sizeof(long int) * j);

	for (i = 0 ; i < j ; i++)
	{
<<<<<<< HEAD
		array[i] = temp % 16;
		temp = temp / 16;
=======
	array[i] = temp % 16;
	temp = temp / 16;
>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
	}
	for (i = j - 1 ; i >= 0 ; i--)
	{
		if (array[i] > 9)
<<<<<<< HEAD
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
=======
		{
			array[i] = array[i] + 39;
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
