#include "main.h"

/**
* print_char -
*/
void print_char(char c, int *count)
{
    _putchar(c);
    (*count)++;
}

/**
* helper_char -
*/
void helper_char(va_list args, int *count)
{
    char c = va_arg(args, int);
    print_char(c, count);
}
