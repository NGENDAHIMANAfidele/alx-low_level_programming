#include "main.h"
/**
 * print_number - print from 0 to 9
 * Return: voiud
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
