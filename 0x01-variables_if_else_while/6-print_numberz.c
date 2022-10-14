#include <stdio.h>

/**
 * main - func
 * Prints single digit base10 numbers starting from 0 using putchar only.
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');


	return (0);

}
