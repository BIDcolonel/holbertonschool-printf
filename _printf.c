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

	if (format == NULL)
		return (-1);

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
				if (*format == 'C' || *format == 'S' || *format == '\0')
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
