#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the character that checks if it's a uppercase or lowercase
 * Return: on success 1
 * on error, 0 is returned.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
