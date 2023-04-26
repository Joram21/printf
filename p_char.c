#include "main.h"

/**
* print_char - Displays character
* @list: list of arguments
* Return: return number of characters printed
*/

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
