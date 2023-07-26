#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
void (*getHelperFunction(const char *specifier))(va_list, int *);

int _putchar(char c);
void _printChar(char c, int *count);
void _helperChar(va_list args, int *count);
void _helperPercent(va_list args, int *count);
void _helperString(va_list args, int *count);
void _helperInt(va_list args, int *count);
void _helperDecimal(va_list args, int *count);
void _printNum(int num, int num_digits, int *count);
int _numLen(int num);

/**
* struct helpconversion - format specifier and corresponding function
* @format: specifier
* @helper: pointer to corresponding helper function
* Description: hold format specifier and corresponding helper function
*/
typedef struct helpconversion
{
	char format;
	void (*helper)(va_list args, int *count);
} helpconversion_t;

#endif
