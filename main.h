#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int wonde_char(va_list arg);
int wonde_str(va_list arg);
int wonde_percent(__attribute__((unused))va_list list);

#endif
