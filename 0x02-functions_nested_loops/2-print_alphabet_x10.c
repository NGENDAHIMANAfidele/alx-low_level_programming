#include "main.h"
/**
 * print_alphabet - print 10 time alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a;
	char b;

	for (a = '1' ; a <= 10 ; a++)
	{
		for (b = 'a' ; b <= 'z' ; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
