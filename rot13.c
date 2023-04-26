#include "main.h"
/**
 * print_rot13 - encodes a string using rot13.
 * @list: args to encode
 * @str: string 
 * Return: converted string
 */
int print_rot13(va_list list)
{
	int x = 0, y;

	char *str;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);

	do {
		y = 0;
		do {
			if (str[x] == a[y])
			{
				_putchar(b[y]);
				break;
			}
			y++;
		} while (y <= 52);

		if (y == 53)
			_putchar(str[x]);

		x++;
	} while (str[x] != '\0');

	return (x);
}
