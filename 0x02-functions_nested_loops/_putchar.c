#include <unistd.h>
/**
 * _putchar - write the character
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
