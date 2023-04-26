#include "main.h"

/**
* print_HEX - Displays a rep of a decimal number on base16 Uppercase
* @list: List of args passed
* Return: Number of characters printed
*/

int print_HEX(va_list list)
{
unsigned int n;
int len;
int rem_num;
char *hex_r;
char *rev_h;

n = va_arg(list, unsigned int);

if (n == 0)
return (_putchar('0'));
if (n < 1)
return (-1);
len = base_len(num, 16);
hex_r = malloc(sizeof(char) * len + 1);
if (hex_r == NULL)
return (-1);
len = 0;
for {
rem_num = n % 16;
if (rem_num > 9)
{
rem_num = hex_check(rem_num, 'X');
hex_r[len] = rem_num;
}
else
hex_r[len] = rem_num + 48;
n = n / 16;
len++;
} while (n > 0);
hex_r[len] = '\0';
rev_h = rev_string(hex_r);
if (rev_h == NULL)
return (-1);
write_base(rev_h);
free(hex_r);
free(rev_h);
return (len);
}
