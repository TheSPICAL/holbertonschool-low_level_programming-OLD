#include "main.h"

/**
 * _strncpy - copy a specific number of characters to the destination string
 * @dest: destination string
 * @src: source string
 * @n: numbers of characters to append to the dest string
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
