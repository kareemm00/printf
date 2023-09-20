#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{

	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');


	_printf("%c%c", 'h', 'i');
	printf("%c%c", 'h', 'i');
	
	_printf("ahmed0\n");
	printf("ahmed0\n");
	_printf("%c", 'S');
	printf("%c", 'S');
	_printf("hi hi hi: %c. didit work?\n", 'F');
	printf("hi hi hi: %c. didit work?\n", 'F');
	_printf("Let'see if the cast is done: %c. did it work?\n", 48);
	printf("Let'see if the cast is done: %c. did it work?\n", 48);
	_printf("%s", "this sentesece is from va_args!\n");
	printf("%s", "this sentesece is from va_args!\n");
	_printf("copmplte the sentence: you %s nothing, jon snow.\n", "know");
	printf("copmplte the sentence: you %s nothing, jon snow.\n", "know");
		
	
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s snow.%c", 'W', 'I', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s snow.%c", 'W', 'I', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	_printf("%%");
	printf("%%");
	_printf("should print a single percent sign: %%\n");
	printf("should print a single percent sign: %%\n");
	_printf("%s%c%c%c%s%%%s%c", "loading ", '.', '.', ',', " 99", " please wait", '\n');
	printf("%s%c%c%c%s%%%s%c", "loading ", '.', '.', ',', " 99", " please wait", '\n');
	_printf("css%ccs%scscsc", 'T', "Test");
	printf("css%ccs%scscsc", 'T', "Test");


	_printf("%c", '\0');
	printf("%c", '\0');
	_printf("%");
	
	_printf("%!\n");
	
	_printf("%K\n");
	















	return (0);
}
