#include "main.h"
/**
 * _puts - print string for new line
 * @str: string
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
