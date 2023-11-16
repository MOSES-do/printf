#include "main.h"

/**
 * print_HEX_more - convert to hexa
 * @q: parameter
 * Return: j
 *
 */

int print_HEX_more(unsigned int q)
{
	int i, j = 0;
	int *array;
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
		{
			array[i] = array[i] + 7;
			_putchar(array[i] + '0');
		}
	}
	free(array);
	return (j);
}

