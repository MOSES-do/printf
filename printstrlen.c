#include "main.h"

/**
 * _strlen - String
 * @s: counted string
 * Return: string lenght
 *
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}

<<<<<<< HEAD
/**
 * _strlenconst - String
 * @s: counted string
 * Return: string lenght
 *
 */

int _strlenconst(const char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
=======
>>>>>>> 614d3f6611e96bffc8e6924e317bc09b76663dcf
