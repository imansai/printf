#include "main.h"
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
/**
 * main - tbd
 * Return: 0;
 */

int main()
{

	char *test = "test";
	char a = 'a';
	printf("%d\n", _printf("Let's try to printf a simple sentence.\n"));
	printf("%d\n", printf("Let's try to printf a simple sentence.\n"));

	_printf("Character:[%c] \n", 'H');
	printf("Character:[%c] \n", 'H');
	_printf("String:[%s] \n", "I am a string !");
	printf("String:[%s] \n", "I am a string !");

	_printf("Ceci est un %s d'%clx\n", test, a);

	return (0);
}