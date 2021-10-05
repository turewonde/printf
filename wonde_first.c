#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * wonde_char - writes the character c to stdout
 * @arg: argument
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int wonde_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * wonde_str - prints a string with a `s` (lower case) specifier
 * @arg: argument
 * Return: number of character printed
 */

int wonde_str(va_list arg)
{
int i;
char *str = va_arg(arg, char*);

if (str == NULL)
	str = "(null)";
else if (*str == '\0')
	return (-1);

for (i = 0; str[i]; i++)
	_putchar(str[i]);

return (i);
}

/**
 * wonde_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int wonde_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}
