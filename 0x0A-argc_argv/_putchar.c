#include "main.h"
/**
 * _putchar - write the chatracters
 * @c: character to print
 * Return:on sucess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
