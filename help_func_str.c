#include "main.h"

/**
* _helperString - func to handle the s format specifier
* @args: args
* @count: pointer to the counter of characters printed
*/
int _helperString(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	return (count);
}
