#include "main.h"
/**
 * print_chessboard - print chessboard
 * @a:array
 * Return:0
 */
void print_chessboard(char (*a)[8])
{
	int a1;
	int b;

	for (a1 = 0; a1 < 8; a1++)
	{
	for (b = 0; b < 8; b++)
	_putchar(a[a1][b]);
	_putchar('\n');
	}
}
