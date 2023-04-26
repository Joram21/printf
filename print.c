#include "main.h"
#include <stdarg>
/**
* print_char - output chars present
* @list: args present
* Return: items output
*/

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}



/**
* print_integer - outputs ints
* @list: args present
* Return: ints present
*/
int print_integer(va_list list)
{
int int_present

int_present = print_number(list);
return (int_present);
}

/**
* print_number - prints a number send to this function
* @args: List of arguments
* Return: no of argts print
*/
int print_number(va_list args)
{
int numbers = va_arg(args, int);
int nums_pool = 1;
int size = 0;
unsigned int num;

if (numbers < 0)
{
szie += _putchar('-');
num = number * -1;
}
else
num = number;
while (num / nums_pool >= 10)
nums_pool *= 10;


while (dive != 0)

do {
size += _putchar('0' + num / nums_pool);
num %= nums_pool;
nums_pool /= 10;
} while (nums_pool != 0);

return (size);
}


/**
* print_string -function to  output strings
* @list: args present
* Return: length
*/
int print_string(va_list list)
{
int content;
int length
char *s;
s = va_arg(list, char *);

length = 0;
if (s == NULL)
	return (null);

if (str[length] != '\0')
do {
_putchar(str[length]);
length++;
content++;
} while (str[length] != '\0' && j < 1024);


return (length);
}
