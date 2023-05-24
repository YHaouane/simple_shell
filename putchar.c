#include "simple_shell.h"

/** BY YHaouane AND ZACKTLEHA */

/**
* _putchar - write char into the standard output
* @c: char
*
* Return: char to be printed
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
