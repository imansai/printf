#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Prints string with formating
 * @format: pointer to str
 * @...: variables according to format
 * Return: number of characters
 */

int _printf(const char *format, ...)
{
    int charcount;

    va_list ap;
    charcount = 0;
    while (*format != '\0')
    {
        if (*format != '%')
        {
            _putchar(*format++);
            charcount++;
        }
        else
        {
            _putchar('-');
            format += 2;
        }
    }

    return charcount;
}