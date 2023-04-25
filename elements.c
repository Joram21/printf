#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - function to print
 * @format: types
 * @...: undefined num of items
 * Return: Printed output
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list arg_list;
va_start(arg_list, format);

while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
putchar(va_arg(arg_list, int));
count++;
break;
case 's':
count += printf("%s", va_arg(arg_list, char *));
break;
case '%':
putchar('%');
count++;
break;
default:
/* unsupported format specifier*/
putchar('%');
putchar(*format);
count += 2;
break;
}
}
else
{
putchar(*format);
count++;
}
format++;
}
va_end(arg_list);
return (count);
}

