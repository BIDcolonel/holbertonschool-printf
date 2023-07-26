#include "main.h"

/**
* _helperString - func to handle the s format specifier
* @args: args
* @count: pointer to the counter of characters printed
*/
void _helperString(va_list args, int *count)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_printChar(*str, count);
		str++;
	}
}
