#include "main.h"

/**
 * print_alphabet - prints the alphabets
 *
 * Return: Always 0.
*/

void print_alphabet(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		_putchar(A);
	}

	_putchar('\n');
}
