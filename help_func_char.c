#include "main.h"

/**
* _printChar - print a char to standart output
* @c: char to print
* @count: pointer to the counter of char printed
*/
void _printChar(char c, int *count)
{
	_putchar(c);
	(*count)++;
}

/**
* _helperChar - helper func to handle the c format specifier
* @args: arguments
* @count: pointer to the counter of character printed
*/
void _helperChar(va_list args, int *count)
{
	char c = va_arg(args, int);

	_printChar(c, count);
}
