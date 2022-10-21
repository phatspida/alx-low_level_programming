#include "main.h"

/**
 * print_diagonal - Print diagonal
 * @n: amount to be printed
 *
 * Return: Always return 0
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
