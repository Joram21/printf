#include "main.h"

/**
* print_unsigned_integer - functio to output unsigned nums
* @list: args present
* Return: nums present
*/

int print_unsigned_integer(va_list list)/*lets us see the numbers we have*/
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);

	return (print_unsgined_number(num));
}

/**
* print_unsgined_number - output unsigned int
* @n: int number to print
* Return: output nums
*/

int print_unsgined_number(unsigned int n)
{
	int dive = 1, length = 0;
	unsigned int num = n;

	do {
		dive *= 10;
	} while (num / dive > 9);

	do {
		length += _putchar('0' + num / dive);
		num %= dive;
		dive /= 10;
	} while (dive != 0);

	return (length);
}
