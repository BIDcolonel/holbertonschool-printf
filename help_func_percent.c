#include "main.h"

/**
* _helperPercent - func to handle the % specifier
* @args: arguments
* @count: pointer to the counter of char printed
*/
int _helperPercent(va_list args)
{
	int count = 0;
	char c = va_arg(args, int);

	c = '%';
	_putchar(c);

	return(count);
}
