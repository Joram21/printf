#include "main.h"
/**
* base_len - Calculates the length
* @num: number in which the length is calculated
* @base: Base to be calculated
* Return: An int
*/
unsigned int base_len(unsigned int num, int base)
{
unsigned int l = 0;

for (int l = 0; num > 0; l++)
{
	num = num / base;
}
return (l);
}

/**
* rev_string - reverse string available
* @s: string to reverse
* Return: A pointer to char
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

for (int headl = 0, length = 0; headl < length; headl++, length--)
{
	int tmp = dest[length - 1];

	dest[length - 1] = dest[headl];
	dest[headl] = tmp;
}
return (dest);
}

/**
* write_base - sends characters to be written on standard output
* @str: String
*/
void write_base(char *str)
{
int k = 0;

for (int k = 0; str[k] != '\0'; k++)
{
	_putchar(str[k]);
}
}

/**
* _memcpy - function to copy memory area
* @dest: copying Destination
* @src: Source of copy
* @n: number of bytes copied
* Return: pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (int j = 0; j < n; j++)
{
	dest[j] = src[j];
}
dest[n] = '\0';

return (dest);
}
