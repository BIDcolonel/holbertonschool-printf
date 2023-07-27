#include "main.h"

/**
*  _printf - function that produces output according to a format
* @format: character string
* Return: nb of characters printed
*/
int _printf(const char *format, ...)
{
	int count = 0;
	void (*helpFunc)(va_list, int *);
	va_list listargs;

	va_start(listargs, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			helpFunc = getHelperFunction(format);

			if (helpFunc)
				helpFunc(listargs, &count);
			else
			{
				if (*format == 'C' || *format == 'S')
					return (-1);

				_printChar('%', &count);
				_printChar(*format, &count);
			}
		}
		else
			_printChar(*format, &count);
		format++;
	}
	va_end(listargs);
	return (count);
}
