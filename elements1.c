
#include <unistd.h>
#include "main.h"
#include "printf.h"
/**
* print_binary - function to print binary
* @num: numbers
* @buffer: space available
* @count: lenght
* Return: binary
*/
void print_binary(unsigned int num, char *buffer, int *count)
{
if (num > 1)
{
print_binary(num / 2, buffer, count);
}
buffer[*count % 1024] = num % 2 + '0';
(*count)++;
}
/**
*  _printf - funtc
*  @format: type
*  Return: output
*
*/
int main()
{
int output = _printf(const char, int *format);
int count = 0;
char buffer[1024];
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
buffer[count % 1024] = va_arg(arg_list, int);
count++;
break;
case 's':
count += snprintf(buffer + (count % 1024), 1024 - (count % 1024), "%s", va_arg(arg_list, char *));
break;
case '%':
buffer[count % 1024] = '%';
count++;
break;
case 'd':
case 'i':
count += snprintf(buffer + (count % 1024), 1024 - (count % 1024), "%d", va_arg(arg_list, int));
break;
case 'u':
count += snprintf(buffer + (count % 1024), 1024 - (count % 1024), "%u", va_arg(arg_list, unsigned int));
break;
case 'o':
count += snprintf(buffer + (count % 1024), 1024 - (count % 1024), "%o", va_arg(arg_list, unsigned int));
break;
case 'x':
count += snprintf(buffer + (count % 1024), 1024 - (count % 1024), "%x", va_arg(arg_list, unsigned int));
break;
case 'X':
count += snprintf(buffer + (count % 1024), 1024 - (count % 1024), "%X", va_arg(arg_list, unsigned int));
break;
case 'b':
print_binary(va_arg(arg_list, unsigned int), buffer, &count);
break;
default:
/* unsupported format specifier*/
buffer[count % 1024] = '%';
buffer[(count + 1) % 1024] = *format;
count += 2;
break;
}
}
else
{
buffer[count % 1024] = *format;
count++;
}
format++;
if (count % 1024 == 0)
	{
write(STDOUT_FILENO, buffer, 1024);
count = 0;
}
}
if (count > 0)
{
write(STDOUT_FILENO, buffer, count % 1024);
}
va_end(arg_list);
return (count);
}
