#include "main.h"

/**
 * tests for upper case character.
 * @c: The input character.
 *
 * Description: function compare input to test.
 * Return: 1 if c is uppercase and 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <= 'z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
