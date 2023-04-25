#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * get_fm_func - finds format to execute
 * @s: format
 * Return: NULL or function to execute
 */

int (*get_fm_func(char s))(va_list(*ptr))
{
	int i = 0;

	fm_t fm[] = {
		{"c", fm_char},
		{"s", fm_str},
		{"d", fm_int},
		{"i", fm_int},
		{"b", fm_bin},
		{NULL, NULL}};
	while (fm[i].fm != NULL)
	{
		if (s == *fm[i].fm)
		{
			return (fm[i].f);
		}
		i++;
	}
	_putchar(s);
	exit(1);
}
