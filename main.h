#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
void helper_percent(va_list args, int *count);
void helper_char(va_list args, int *count);
void helper_string(va_list args, int *count);
void print_char(char c, int *count);

typedef struct helpconversion {
    char format;
    void (*helper)(va_list args, int *count);
} helpconversion_t;

#endif
