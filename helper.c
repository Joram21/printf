#include "main.h"

/**
* base_len - Calculates the length
* @num: no for which the length is being calc
* @base: Base to be calculated by
* Return: An integer representing the length of a no
*/

unsigned int base_len(unsigned int num, int base)
{
unsigned int i = 0;

do {
num = num / base;
i++;
} while (num > 0);

return (i);
}


/**
* rev_string - reverse string in place
*
* @s: string to reverse
* Return: A pointer to a character
*/

char *rev_string(char *s)
{
int length = 0;
int headl = 0;
char tmp;
char *dest;

while (s[length] != '\0')
{
length++;
}

dest = malloc(sizeof(char) * (length + 1));

if (dest == NULL)
return (NULL);

do {
tmp = dest[length - 1];
dest[length - 1] = dest[headl];
dest[headl] = tmp;
headl++;
length--;
} while (headl < length);

return (dest);
}

/**
* write_base - sends characters to be written on standard output
* @str: String to parse
*/

void write_base(char *str)
{
int i = 0;

do {
_putchar(str[i]);
i++;
} while (str[i] != '\0');
}

/**
* _memcpy - copy memory area
* @dest: Destination for copying
* @src: Source to copy from
* @n: The number of bytes to copy
* Return: The _memcpy() function returns a pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

do {
dest[i] = src[i];
i++;
} while (i < n);
dest[i] = '\0';

return (dest);
}

/**
 * hex_check - Checks if a given character is a valid hexadecimal digit
 * @num: The decimal value of the digit
 * @x: 'x' for lowercase hex digits, 'X' for uppercase hex digits
 *
 * Return: The ASCII value of the hex digit if it is valid, 0 otherwise
*/
int hex_check(int num, char x)
{
char *hex = "abcdef";
char *Hex = "ABCDEF";
int i = num - 10;
int result = 0;
do {
if (x == 'x')
result = hex[i];

else
result = Hex[i];

} while (0);

return (result);
}
