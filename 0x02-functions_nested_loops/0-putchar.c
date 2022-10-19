#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'Prints _putchar'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
