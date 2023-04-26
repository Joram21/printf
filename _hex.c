#include "main.h"
/**
 * hex_check - Checks if a given character is a hexadecimal digit
 * @num: The decimal value of the digit
 * @x: 'x' for lowercase hex digits, 'X' for uppercase hex digits
 * Return: The ASCII value of the hex digit if valid, otherwise 0
*/
int hex_check(int num, char x)
{
char *hex = "abcdef";
char *Hex = "ABCDEF";
int v = num - 10;
int result = 0;
if (x == 'x')
{
	for (int v = 0; v < 1; v++)
	{
		result = hex[v];
	}
}
else
{
	for (int v = 0; v < 1; v++)
	{
		result = Hex[v];
	}
}

return (result);
}
