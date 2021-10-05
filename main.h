#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>


/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int wonde(const char *format, conver_t f_list[], va_list arg_list);
int _putchar(char c);
int _printf(const char *format, ...);
int wonde_char(va_list arg);
int wonde_str(va_list arg);
int wonde_percent(__attribute__((unused))va_list list);

#endif
