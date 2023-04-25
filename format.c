#include "main.h"

/**
* format_reciever - Receive the main string and all the
* necessary parameters
* @format: string having all desired chars.
* @f_list:  list of all  posible funcs.
* @arg_list: list having all the args passed to  program.
* Return: total count of the characters printed.
*/

int format_reciever(const char *format, conver_t f_list[], va_list arg_list)
{
int i = 0, j, rturn_value, printed_chars = 0;

for (int i = 0; format[i] != '\0'; i++)
{
	if (format[i] == '%')
	{
		int j = 0;
	}
}
;
while (f_list[j].sym != NULL)
{
if (format[i + 1] == f_list[j].sym[0])
{
rturn_value = f_list[i].f(arg_list);
if (rturn_value == -1)
return (-1);
printed_chars += rturn_value;
break;
}
j++;
}
if (f_list[j].sym == NULL && format[i + 1] != ' ')
{
if (format[i + 1] != '\0')
{
_putchar(format[i]);
_putchar(format[i + 1]);
printed_chars += 2;
}
else
return (-1);
}
i++;
}
else
{
_putchar(format[i]);
printed_chars++;
}
} while (format[i++] != '\0');

return (printed_chars);
}
