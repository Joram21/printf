#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - function to print
 * @format: types
 * @...: undefined num of items
 * Return: Printed output
 */
int _printf(const char *format, ...)
{
    int count = 0;
    char buffer[1024];
    va_list arg_list;
    va_start(arg_list, format);
    
    while (*format)
    {
        if (*format == '%') {
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
                default:
                    // unsupported format specifier
                    buffer[count % 1024] = '%';
                    buffer[(count + 1) % 1024] = *format;
                    count += 2;
                    break;
            }
        } else {
            buffer[count % 1024] = *format;
            count++;
        }
        format++;
        if (count % 1024 == 0) {
            write(STDOUT_FILENO, buffer, 1024);
            count = 0;
        }
    }
    
    if (count > 0) {
        write(STDOUT_FILENO, buffer, count % 1024);
    }
    
    va_end(arg_list);
    
    return (count);
}

