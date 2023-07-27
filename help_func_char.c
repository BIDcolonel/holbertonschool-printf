#include "main.h"

/**
* _helperChar - print a char to standart output
* @args: args
* Return: 1
*/
int _helperChar(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
