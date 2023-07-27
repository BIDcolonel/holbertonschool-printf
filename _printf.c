#include "main.h"

/**
*  _printf - function that produces output according to a format
* @format: character string
* Return: nb of characters printed
*/
int _printf(const char *format, ...)
{
	int count = 0;
	int (*helpFunc)(va_list);
	va_list listargs;

	va_start(listargs, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			helpFunc = getHelperFunction(format);

			if (helpFunc)
				count += helpFunc(listargs);
			else
			{
				if (*format == 'C' || *format == 'S')
				{
					va_end(listargs);
					return (-1);
				}

				_putchar('%');
				_putchar(*format);
				count += 2;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(listargs);
	return (count);
}
