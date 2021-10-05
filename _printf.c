#include "holberton.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", wonde_char},
		{"s", wonde_string},
		{"%", wonde_percent},
		{"d", wonde_integer},
		{"i", wonde_integer},
		{"b", wonde_binary},
		{"r", wonde_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", wonde_octal},
		{"x", wonde_hex},
		{"X", wonde_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*Calling parser function*/
	printed_chars = wonde(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
