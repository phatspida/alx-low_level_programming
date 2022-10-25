#include "main.h"

/**
 * _puts - prins a string followded y a new line.
 * @str: pointer to  variable
 *
 * Return: void
 */
void _puts(char *str)
{
	if (str)
	{
		while (*str)
			putchar(*str++);
		putchar('\n');
	}
}
