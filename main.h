#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int (*getHelperFunction(const char *specifier))(va_list);

int _putchar(char c);
int _helperChar(va_list args);
int _helperPercent(va_list args);
int _helperString(va_list args);
int _helpNum(va_list args);

/**
* struct helpconversion - format specifier and corresponding function
* @format: specifier
* @helper: pointer to corresponding helper function
* Description: hold format specifier and corresponding helper function
*/
typedef struct helpconversion
{
	char format;
	int (*helper)(va_list);
} helpconversion_t;

#endif
