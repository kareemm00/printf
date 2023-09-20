#include "main.h"

/**
 * print_integers - a function that prints integers
 *
 *@arguments: arg
 *
 * Return: count
*/

int print_integers(va_list arguments)
{
	int n1 = va_arg(arguments, int);
	int num, last = n1 % 10, digits, j = 1;
	int  count = 1;

	n1 = n1 / 10;
	num = n1;
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n1 = -n1;
		last = -last;
		count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			j = j * 10;
			num = num / 10;
		}
		num = n1;
		while (j > 0)
		{
			digits = num / j;
			_putchar(digits + '0');
			num = num - (digits * j);
			j = j / 10;
			count++;
		}
	}
	_putchar(last + '0');
	return (count);
}
