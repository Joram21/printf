#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * struct convert - a structure for symbols and functions
 * @sym: The operator
 * @f: The function intended
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/**
* _printf - Main function takes format print formatted output to the console.
* @format: the format string that specifies the output format
* Return: characters printed
*/
int _printf(const char *format, ...);

/**
* _putchar -function to print a single char
* @c: character to be printed
* Return: no of chars printed (always 1) success
*/
int _putchar(char c);

/**
* print_number - helper function to print signed and unsigned integers
* @args: the variable list of arguments
* Return: characters printed
*/
int print_number(va_list args);

unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int n);
int hex_check(int num, char x);
int print_hex_aux(unsigned long int num);
int isNonAlphaNumeric(char c);
int _puts(char *str);
char *convert(unsigned long int num, int base, int lowercase);

/**
* format_reciever - helper function to receive the format string
* @format: the format string
* @f_list: the list of conversion functions
* @arg_list: list of arguments to be printed
* Return: the characters printed
*/
int format_reciever(const char *format, conver_t f_list[], va_list arg_list);
int print_percent(va_list);
int print_integer(va_list);
int print_char(va_list);
int print_string(va_list);
int print_binary(va_list);
int print_unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_HEX(va_list list);
int print_String(va_list val);
int print_pointer(va_list val);
int print_rev(va_list l);
int print_rot13(va_list list);
#endif
