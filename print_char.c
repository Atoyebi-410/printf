#include "main.h"

/**
 * printf_char - this is used to print a char.
 * @val: this is for arguments.
 * Return: 1.
 */


int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
