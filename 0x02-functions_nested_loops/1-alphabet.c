#include "main.h"

/**
 * main - entry point.
 *
 * Description: 'The program prints the letters
 * of the alphabets in lower case.'
 *
 * Return: Always 0 (Succcess).
 */

void print_alphatbet(void)
{
	char n;
	passing argument 1 of ‘_putchar’ makes integer from pointer without a cast

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar (n);
	}
	_putchar ('\n');
}
