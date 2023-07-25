#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
void _helperPercent(va_list args, int *count);
void _helperChar(va_list args, int *count);
void _helperString(va_list args, int *count);
void _printChar(char c, int *count);
void (*getHelperFunction(const char *specifier))(va_list, int *);

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
