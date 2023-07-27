#include "main.h"

/**
* _helperPercent - func to handle the % specifier
* @args: arguments
* Return: count
*/
int _helperPercent(va_list args)
{
	int count = 0;
	char c = va_arg(args, int);

	c = '%';
	_putchar(c);

	return (count);
}
