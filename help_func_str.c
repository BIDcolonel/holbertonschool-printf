#include "main.h"

/**
* helper_string -
*/
void helper_string(va_list args, int *count)
{
    char *str = va_arg(args, char *);
    if (str == NULL)
        str = "(null)";
    while (*str) {
        print_char(*str, count);
        str++;
    }
}
