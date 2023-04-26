#include "main.h"

/**
* print_String - print exclusive string.
* @l: va_list containing the argument to print
* Return: length of the string.
*/
int print_String(va_list l)
{
register short len = 0;
char *res, *s = va_arg(l, char *);

if (!s)
return (_puts(NULL_STRING));

while (*s)
{
if (isNonAlphaNumeric(*s))
{
res = convert(*s, 16, 0);
if (!res[1])
len += _putchar('0');
len += _puts(res);
}
else
len += _putchar(*s);

s++;
}

return (len);
}


/**
* isNonAlphaNumeric - determines if char is a non-alphanumeric
* @c: input char here
* Return: true or false
*/
int isNonAlphaNumeric(char c)
{
return ((c > 0 && c < 32) || c >= 127);
}

/**
* convert - converts no and base to string
* @num: input number here
* @base: input base here
* @lowercase: flag if hexa values needs to be in lowercase
* Return: result string
*/
char *convert(unsigned long int num, int base, int lowercase)
{
static char *rep;
static char buffer[50];
char *ptr;

rep = (lowercase)
? "0123456789abcdef"
: "0123456789ABCDEF";
ptr = &buffer[49];
*ptr = '\0';

while (num != 0)
{
num /= base;
*(--ptr) = rep[num % base];
}

return (ptr);
}
