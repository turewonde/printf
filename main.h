#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int wonde_int(va_list arg);
int wonde_unsigned(va_list arg);
int _printf(const char *format, ...);
int wonde_char(va_list arg);
int wonde_str(va_list arg);
int wonde_percent(void);
void wonde_binary(unsigned int n, unsigned int* printed);
int wonde_unsignedToBinary(va_list arg);
int wonde_oct(va_list arg);
int wonde_unsignedIntToHex(unsigned int num, char _case);
int wonde_hex_base(va_list arg, char _case);
int wonde_hex(va_list arg);
int wonde_HEX(va_list arg);
int wonde_STR (va_list arg);

/**
 * struct identifierStruct - structure definition of a printTypeStruct
 * @indentifier: type
 * @printer: function to print
 */
typedef struct identifierStruct
{
char *indentifier;
int (*printer)(va_list);
} identifierStruct;

#endif
