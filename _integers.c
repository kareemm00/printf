#include "main.h"

/**
 * print_integers - a function that prints integer
 * Return: count
 */

int print_integers(int num)
{
	int count = 0;

	if (num < 0)
	{
		count += _putchar('-');
		num = num * -1;
	}
	if (num / 10)
		count += print_integers(num / 10);

	count += _putchar(num % 10 + '0');
	return (count);

}
