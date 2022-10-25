#include "main.h"

/**
 * swap_int - Swaps the values of ttwo integers
 * @a: pointer to variable a value
 * @b: pointer to variable b value
 *
 * Return: Always Null
 */
void swap_int(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
