#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times
 *
 * Return: Always 0.
*/

void print_alphabet_x10(void)
{
	char A;
	int N;

	for (N = '0'; N <= 9; N++)
	{
	for (A = 'a'; A <= 'z'; A++)
	{
		_putchar(A);
	}
	}
	_putchar('\n');
}
