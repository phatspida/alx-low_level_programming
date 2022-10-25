#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: pointer variable
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *t = s;

	if (s)
	{
		while (*t)
			++t;
		while (s < t--)
			putchar(*t);
		putchar('\n');
	}
}
