#include "main.h"

/**
* _helperString - func to handle the s format specifier
* @args: args
* Return: count
*/
int _helperString(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		free(str);
		str = "(null)";
	}

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
