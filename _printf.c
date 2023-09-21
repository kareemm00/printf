#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - a function that produces output according to a format
 * @format: a character string.
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int count = 0, i;
	char *str;
	va_list arguments;

	va_start(arguments, format);
	for (i = 0; format[i] != '\0'; )
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(arguments, int));
					break;
				case 's':
					str  = va_arg(arguments, char *);

					if (str == NULL)
						count += _strlen(str);
					count += write(1, "(null)", 6);
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'd':
					count += print_integers(va_arg(arguments, int));
					break;
				case 'i':
					count += print_integers(va_arg(arguments, int));
					break;
				default:
					break;
			}			i += 2;
		}
	}	return (count);
}
