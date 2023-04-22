/*defining a headerwith a macro called main*/
#ifndef MAIN_H
#define MAIN_H 

/*Add standard libraries so that we will not have to include in all the*/
/*other files that we will create*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/*end of inclusion of standard libraries*/

/*Task 0:Write a function that produces output according to a format.*/
/*Print %*/
int print_percent(va_list types, int size, int flags, int width, char buffer[],int precision);
/*Print Str*/
int print_string(va_list types, int size, int flags, int width, char buffer[],int precision);
/*Print Char*/
int print_char(va_list types, int size, int flags, int width, char buffer[],int precision);

/**
 * struct fmt - defines the layout of the operators
 * @fmt: The actual layout of the operators
 * @fn: The fnctn to work with
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - defines the layout of the operators 
 * @fmt: The actual layout of the operators
 * @fm_t: The fnctn to work with
 */
typedef struct fmt fmt_t;
int handle_print(va_list types, int size, int flags, int width, char buffer[],int precision, int *num, const char *format);

int handle_write_char(char c, int size, int flags, int width, char buffer[],int precision);
int write_number(int is_positive, int ind, int size, int flags, int width, char buffer[],int precision);
int write_num(int ind, char bff[], int flags, int width, int precision, int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length, int width, int flags, char padd, char extra_c, int padd_start);
/*Task 0: handle_print - Prints an argument based on its type*/
int _printf(const char *format, ...);

/*Task 1 Handle the following conversion of d and i*/
int print_int(va_list types, int size, int flags, int width, char buffer[],int precision);

/*Task 2: Handle the following conversion of b*/
int print_binary(va_list types, int size, int flags, int width, char buffer[],int precision);

/*Task 3: Handle the following conversion of u, o, x, and X*/
int print_hexadecimal(va_list types, int size, int flags, int width, char buffer[],int precision);
int print_octal(va_list types, int size, int flags, int width, char buffer[],int precision);
int print_hexa_upper(va_list types, int size, int flags, int width, char buffer[],int precision);
int print_unsigned(va_list types, int size, int flags, int width, char buffer[],int precision);
int write_unsgnd(int is_negative, int ind, int size, int flags, int width, char buffer[],int precision);
/*code to map hexa_upper to hexadeci*/
int print_hexa(va_list types, int size, int flags, int width, char buffer[],int precision char map_to[], char flag_ch);

/*Task 4: Use a local buffer of 1024 chars in order to call write as little as possible.*/
int print_pointer(va_list types, int size, int flags, int width, char buffer[],int precision);
#define BUFF_SIZE 1024

/*Task 5 and 6: Handle the following custom conversion of S and p*/
int print_non_printable(va_list types, int size, int flags, int width, char buffer[],int precision);

/*Task 7: Handle the following flag characters for +  #*/
#define F_PLUS 2 /*these are flags*/
#define F_HASH 8
#define F_SPACE 16
int get_flags(const char *format, int *i);

/*Task 8: Handle l and h*/
#define S_LONG 2
#define S_SHORT 1
int get_size(const char *format, int *i);
/*Task 9: Handle the field width for non-custom conversion specifiers.*/
int get_width(const char *format, int *i, va_list list);

/*Task 10: Handle the precision for non-custom conversion specifiers.*/
int get_precision(const char *format, int *i, va_list list);

/*Task 11: Handle the 0 flag character for non-custom conversion specifiers.*/
#define F_ZERO 4

/*Task 12: Handle the - flag character for non-custom conversion specifiers.*/
#define F_MINUS 1

/*Task 13: Handle the following custom conversion specifier: r*/
int print_reverse(va_list types, int size, int flags, int width, char buffer[],int precision);

/*Task 15: Handle the following custom conversion specifier: R*/
int print_rot13string(va_list types, int size, int flags, int width, char buffer[],int precision);

#define UNUSED(x) (void)(x)
/*utils: To hold static functions*/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
#endif
































