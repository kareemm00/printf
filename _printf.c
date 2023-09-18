#include "main.h"

/**
 * _printf - a function that produces output according to a format
 *
 * @format: a character string.
 *
 * Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	int count = 0;
	va_list arguments;

	if (format == NULL)
		return (-1);
	va_start(arguments, format);
	while (*format)
	{
		if (*format == '\0')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += 1;
					putchar(va_arg(arguments, int));
					break;
				case 's':
					count += strlen(va_arg(arguments, char *));
					printf("%s", va_arg(arguments, char *));
					break;
				case '%':
					count += 1;
					putchar('%');
					break;
				default:
					putchar(*format);
					break;
			}
		}
		else
		{
			putchar(*format);
			count += 1;
		}
		format++;
	}
	va_end(arguments);
	return (count);

}
