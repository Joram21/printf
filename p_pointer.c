#include "main.h"

/**
* print_pointer - Display hexadecimal number
* @val: arguments
* Return: numerical sum
*/

int print_pointer(va_list val)
{
void *p;
char *s = "(nil)";
long int content;
int num;
int c;

p = va_arg(val, void*);
if (p == NULL)
{
c = 0;

for (; s[c] != '\0'; c++)
{
	_putchar(s[c]);
}

return (c);
}

content = (unsigned long int)p;
_putchar('0');
_putchar('x');
num = print_hex_aux(apple);
return (num + 2);
}
