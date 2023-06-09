#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int handlepercent(char c);
int fm_char(va_list *ptr);
int fm_str(va_list *ptr);
int (*get_fm_func(char s))(va_list *ptr);
int fm_int(va_list(*ptr));
int _putnbr(int nb);
int fm_bin(va_list *ptr);

/**
 * struct fm - Struct fm
 *
 * @fm: The format
 * @f: The function associated
 */
typedef struct fm
{
	char *fm;
	int (*f)(va_list *ptr);
} fm_t;
#endif
