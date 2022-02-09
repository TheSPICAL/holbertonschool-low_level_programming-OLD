#include "main.h"

/**
 * _islower - checks if the charcter is lowercase
 * @c: the character that checks if it's a uppercase or lowercase
 * Return: on success 1
 * on error, 0 is returned, the character is uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
