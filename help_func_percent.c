#include "main.h"

/**
* _helperPercent - func to handle the % specifier
* @args: arguments
* @count: pointer to the counter of char printed
*/
void _helperPercent(va_list args, int *count)
{
	char c = va_arg(args, int);

	c = '%';
	_printChar(c, count);
}
