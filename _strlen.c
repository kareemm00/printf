#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: parameter string
 *
 * Return: length of a string
*/

int _strlen(char *s)
{
	int length;
	int count = 0;

	for (length = 0; s[length] != '\0'; s++)
	{
		count += _putchar(s[length]);
	}
	return (count);
}

