#include <stdio.h>
/**
 * main - prints numbers of base 16 in lowercase.
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char letter;

	for (num = '0'; num < '10'; num++)
		putchar(num);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
