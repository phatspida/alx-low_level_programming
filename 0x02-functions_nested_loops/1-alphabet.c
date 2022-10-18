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
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar (n);
	}
	_putchar ("\n")
}
