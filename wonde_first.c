#include "main.h"
#include <stdlib.h>

/**
 * print_c - Print a character.
 * @arg: Char to be printed.
 * Return: On success 1.
 * On error -1.
 **/

int print_c(va_list arg)
{
	char c = va_arg(arg, int);

	return (_putchar(c));
}

/**
 * print_s - Print a string.
 * @arg: String address.
 * Return: integer.
 */
int print_s(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	for (; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
