#include "main.h"
/**
 * _printf - a function that produces output according to a format
 * @format: a character string.
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int count = 0;
	va_list arguments;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(arguments, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!*format)
				return (-1);
			switch (*format)
			{
				case 'c':
					count += write(1, &va_arg(arguments, int), 1);
					break;
				case 's':
					count += write(1, str, _strlen(str));
					break;
				case '%':
					count += write(1, "%", 1);
					break;
				default:
					write(1, format, 1);
			}
		}
		else
		{
			write(1, format, 1);
			count += 1;
		}
		format++;
	}
	va_end(arguments);
	return (count);
}
