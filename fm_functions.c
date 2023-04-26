#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * fm_char - Prints char
 * @ptr: ptr to function args
 * Return: number of characters printed (1)
 */

int fm_char(va_list(*ptr))
{
	char c = va_arg(*ptr, int);

	_putchar(c);
	return (1);
}

/**
 * fm_str - Prints str
 * @ptr: ptr to function args
 * Return: number of characters printed
 */
int fm_str(va_list *ptr)
{
	int i = 0;
	char *str = va_arg(*ptr, char *);

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++, i++;
	}

	return (i);
}

/**
 * fm_int - Prints int
 * @ptr: ptr to function args
 * Return: number of characters printed (1)
 */

int fm_int(va_list(*ptr))
{
	int a = va_arg(*ptr, int);

	return (_putnbr(a));
}

/**
 * fm_bin - Prints int converted to binary
 * @ptr: ptr to function args
 * Return: number of characters printed (1)
 */
int fm_bin(va_list(*ptr))
{
	unsigned int a = va_arg(*ptr, int);
	int comp = 0;
	int pow = 1;
	int exp = 0;
	int charcount = 0;
	int oddeven = a % 2;

	a = a - a % 2;

	while (pow < a)
	{
		pow *= 2;
		exp += 1;
	}
	exp--;
	pow = pow / 2;

	while (exp != 0)
	{
		if (pow <= a)
		{
			a -= pow;
			pow = pow / 2;
			exp--;
			_putchar('1');
			charcount++;
		}
		else
		{
			_putchar('0');
			exp--;
			pow = pow / 2;

			charcount++;
		}
	}
	_putchar('0' + oddeven);
	return (charcount);
}
