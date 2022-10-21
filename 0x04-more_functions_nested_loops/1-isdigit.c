#include "main.h"

/**
 * _isdigit - tests to see if input is a digit.
 * @c: input to test.
 *
 * Return: 1 if c is a digit and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
