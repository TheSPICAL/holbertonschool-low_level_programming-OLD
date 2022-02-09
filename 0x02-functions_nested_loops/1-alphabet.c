#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char ch = 'a';
	printf("Lowercase English Alphabets:\n");
	while(ch <= 'z')
{
	printf("%c ", ch);
	ch++;
}
	printf("\n");
	return 0;
}
