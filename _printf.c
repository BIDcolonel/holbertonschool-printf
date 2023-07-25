#include "main.h"

int _printf(const char *format, ...)
{
    int count = 0, isvalid;
	int i;

    helpconversion_t helpconversion[] = {
        {'c', helper_char},
        {'s', helper_string},
        {'%', helper_percent},
        {'\0', NULL}
    };

	va_list listargs;
    va_start(listargs, format);

    while (*format)
    {
        if (*format == '%')
        {
            isvalid = 0;
            format++;
            for (i = 0; helpconversion[i].format != '\0'; i++)
            {
                if (*format == helpconversion[i].format)
                {
                    helpconversion[i].helper(listargs, &count);
                    isvalid = 1;
                }
            }
            if (!isvalid)
            {
                print_char('%', &count);
                print_char(*format, &count);
            }
        }
        else
            print_char(*format, &count);
        format++;
    }
    va_end(listargs);
    return (count);
}
