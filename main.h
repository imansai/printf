#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _printf(const char *format, ...);
int fm_char(char *c);
int fm_str(char *str);
int (*get_fm_func(char s))(char *c);

/**
 * struct fm - Struct fm
 *
 * @fm: The format
 * @f: The function associated
 */
typedef struct fm
{
	char *fm;
	int (*f)(char *c);
} fm_t;
#endif
