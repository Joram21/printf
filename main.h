/*Header guards for the header file*/
#ifndef _PRINTF_H
#define _PRINTF_H
/*include standard libraries that we will use*/
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*end of inclusion of libraries and preprocessors*/

/*define our own structure*/
struct convert
{
        char *sym;
        int (*f)(va_list);
};
/*defining the type of the structure*/
typedef struct convert conver_t;

/*define the prototypes used in the project*/
int _putchar(char c);/*_putchar command we use*/
int _printf(const char *format, ...);
void _vprintf(const char *format, va_list args);
int parser(const char *format, conver_t funct_list[], va_list args);
int p_char(va_list);
int p_string(va_list args);
int p_percent(va_list);
int print_unsgined_number(unsigned int n);
int print_number(va_list);
int p_integer(va_list);
void handle_flags(char flag, int num);
void print_arg(char c, va_list arg);
void print_binary(unsigned int num, char *buffer, int *count);
void handle_length_modifiers(char modifier, int num);
int print_rot13(const char *format, ...);
char *rot13(char *s);

#endif
