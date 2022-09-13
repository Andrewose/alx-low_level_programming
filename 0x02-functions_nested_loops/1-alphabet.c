#include <stdio.h>

/**
 * main - print alphabet -print characters from a to z
 *
 * return: Always void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar (c);
	putchar ('\n');
}
	
