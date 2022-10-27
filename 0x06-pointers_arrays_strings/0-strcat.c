#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: input string to be concatenated
 * @src: input string to be concatenated
 *
 * Description: This function will append string pointed to by src
 * to the string pointed to by dest, overwriting the null byte.
 *
 * Return: a pointer to the resulting string dest
 */
char _strcat(char *dest, char *src)
{
	char *dest_end = dest;
	int src_len = 0;

	while (*dest_end)
		++dest_end;

	while (src[src_len])
		++src_len;

	if (src + src_len < dest || dest_end + src_len < src)
	{
		do {
			*dest_end++ = *src++;
		} while (src_len--);
	}
	return (dest);
}
