#include "main.h"

/**
* helper_percent -
*/
void helper_percent(va_list args, int *count)
{
    char c = va_arg(args, int);
    c = '%';

    print_char(c, count);
}
