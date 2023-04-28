#include <stdio.h>
void first(void) __attribute__ ((constructor));

/**
 * firtst - prints a sentence before the main
 * functio is executed
 */
void first(void)
{
	printf("you'are beat! and yet, you must allow,\n");
	printf("i bore my house upon my back!\n");
}
