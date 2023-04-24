#ifndef MY_PRINTF
#define MY_PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>


#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct convert - structure
 * @sym: symbol
 * @f: funtion ptr
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;


int _putchar(char c);
int _printf(const char *format, ...);
void _vprintf(const char *format, va_list args);
int parser(const char *format, conver_t funct_list[],va_list args);

int p_char(va_list);
int p_string(va_list args);
int p_percent(va_list);
int p_binary(va_list, int size,
		int flags, int width, char buffer[], int precision);
int p_unsgined_number(unsigned int n);
int p_number(va_list args);
int p_integer(va_list);
int p_hexa_upper(va_list, int size,
		int flags, int width, char buffer[], int precision);
int p_hexa(va_list, int size,
		int flags, int width, char buffer[], int precision);
int p_octal(va_list, int size,
		int flags, int width, char buffer[], int precision);
int p_handle(const char *sym, int *i, va_list, int size,
		int flags, int width, char buffer[], int precision);
int p_reverse(va_list, int size,
		int flags, int width, char buffer[], int precision);
int p_rot13(va_list, int size,
		int flags, int width, char buffer[], int precision);

int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);

int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);



#endif
