#include "main.h"

/**
 * _isupper - checks if the charcter is uppercase
 * @c: the character that checks if it's a uppercase or lowercase
 * Return: on success 1
 * on error, 0 is returned, the character is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
