#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_arg - args printer
 * @c: char
 * @arg: args
 */
void print_arg(char c, va_list arg)
{
    switch (c)
    {
        case 'd':
            printf("%d", va_arg(arg, int));
            break;
        case 'u':
            printf("%u", va_arg(arg, unsigned int));
            break;
        case 'o':
            printf("%o", va_arg(arg, unsigned int));
            break;
        case 'x':
            printf("%x", va_arg(arg, unsigned int));
            break;
        case 'X':
            printf("%X", va_arg(arg, unsigned int));
            break;
        case 'c':
            printf("%c", va_arg(arg, int));
            break;
        case 's':
            printf("%s", va_arg(arg, char *));
            break;
        case 'S':
	    char *s = va_arg(arg, char *);
            while (*s)
	    {
                if (*s >= 32 && *s < 127)
		{
                    putchar(*s);
                }
		else
		{
                    printf("\\x%02X", *s);
                }
                s++;
            }
            break;
        }
        case 'p':
            printf("%p", va_arg(arg, void *));
            break;
        case 'r':
	    {
            char *s = va_arg(arg, char *);
            for (int i = strlen(s) - 1; i >= 0; i--)
	    {
                putchar(s[i]);
            }
            break;
        }
	   
   
        default:
            printf("Unsupported conversion specifier: %c", c);
            break;
    }
}

int _printf(const char *format, ...)
{
/**
 * _printf - function to print
 * @format: types
 * @...: undefined num of items
 * Return: Printed output
 */	
    va_list arg;
    va_start(arg, format);

    int chars_printed = 0;
    char *p = (char *)format;
    while (*p)
    {
        if (*p == '%')
	{
    		p++;
            print_arg(*p, arg);
        }
	else
	{
            putchar(*p);
        }
        p++;
        chars_printed++;
    }

    va_end(arg);
    return (chars_printed);
}

