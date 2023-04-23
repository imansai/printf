#include "main.h"

/**
 * _fm_char - Prints char
 * @c: pointer to char
 * Return: number of characters printed (1)
 */

int fm_char(char *c)
{
	_putchar(*c);

	return (1);
}

/**
 * _fm_str - Prints str
 * @str: pointer to str
 * Return: number of characters printed
 */
int fm_str(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++, i++;
	}

	return (i);
}