#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	int printed_values;
	convert_t f_list[] = {
		{"c", wonde_char},
		{"s", wonde_string},
		{"%", wonde_percent},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	printed_values = wonde(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_values);
}
