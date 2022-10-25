#include "main.h"

/**
 * _strlen- Returns the length of a string.
 * @s: points to the cariable address
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	if (s)
	{
		while (*(s + len))
			++len;
	}
	return (len);
}
