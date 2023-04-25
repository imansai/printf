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
	int len_1 = 0, len_2 = 0;

	/* ===========> %c <=========== */
	printf("----------------------\n");
	printf("----> CHAR CASES <----\n");
	printf("----------------------\n");
	len_1 = printf(" printf output:    %c\n", 53);
	len_2 = _printf("_printf output:    %c\n", 53);
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);
	len_1 = printf(" printf output:    %cc\n", 'a');
	len_2 = _printf("_printf output:    %cc\n", 'a');
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);
	len_1 = printf(" printf output:    %cAAA\n", 'a');
	len_2 = _printf("_printf output:    %cAAA\n", 'a');
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);
	len_1 = printf(" printf output:    %yd\n");
	len_2 = _printf("_printf output:    %yd\n");
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);
	len_1 = printf(" printf output:    %c\n", '\0');
	len_2 = _printf("_printf output:    %c\n", '\0');
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);
	len_1 = printf(" printf output:    %%%c\n", 'y');
	len_2 = _printf("_printf output:    %%%c\n", 'y');
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);

	/* ===========> %s <=========== */
	printf("----------------------\n");
	printf("---> STRING CASES <---\n");
	printf("----------------------\n");
	len_1 = printf(" printf output:    %s\n", "Morocco");
	len_2 = _printf("_printf output:    %s\n", "Morocco");
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);
	len_1 = printf(" printf output:    %s$\n", "");
	len_2 = _printf("_printf output:    %s$\n", "");
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);
	len_1 = printf(" printf output:    %s$\n", NULL);
	len_2 = _printf("_printf output:    %s$\n", NULL);
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);
	len_1 = printf(" printf output:    %s\n", "hello, world");
	len_2 = _printf("_printf output:    %s\n", "hello, world");
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);
	len_1 = printf(" printf output:    %sForLife\n", "Morocco");
	len_2 = _printf("_printf output:    %sForLife\n", "Morocco");
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);

	/* ===========> % <=========== */
	printf("----------------------\n");
	printf("-> PERCENTAGE CASES <-\n");
	printf("----------------------\n");
	len_1 = printf(" printf output:    %%\n");
	len_2 = _printf("_printf output:    %%\n");
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);
	len_1 = printf(" printf output:    %%%%%%\n");
	len_2 = _printf("_printf output:    %%%%%%\n");
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);
	printf(" printf output:    ");
	len_1 = printf("%");
	printf("\n");
	printf("_printf output:    ");
	len_2 = _printf("%");
	printf("\n");
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);
	printf(" printf output:    ");
	len_1 = printf("%   ");
	printf("\n");
	printf("_printf output:    ");
	len_2 = _printf("%   ");
	printf("\n");
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);
	printf(" printf output:    ");
	len_1 = printf("test%");
	printf("\n");
	printf("_printf output:    ");
	len_2 = _printf("test%");
	printf("\n");
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);
	printf(" printf output:    ");
	len_1 = printf("%  s", "valid format");
	printf("\n");
	_printf("_printf output:    ");
	len_2 = _printf("%  s", "valid format");
	printf("\n");
	printf(" printf length:    [%d]\n", len_1);
	printf("_printf length:    [%d]\n", len_2);

	return (0);
}