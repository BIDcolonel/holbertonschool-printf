#include "main.h"

/**
* _helperChar - print a char to standart output
* @c: char to print
* @count: pointer to the counter of char printed
*/
int _helperChar(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
    return (1);
}
