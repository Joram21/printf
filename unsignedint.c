#include "main.h"

/**
* print_unsigned_integer - functio to output unsigned nums
* @list: args present
* Return: nums present
*/

int print_unsigned_integer(va_list list)/*lets us see the numbers we have*/
{
	unsigned int numbers_present;

	numbers_present = va_arg(list, unsigned int);

	if (numbers_present == 0)
		(print_unsgined_number(numbers_present));

	if (numbers_present < 1)
		(-1);

	return (print_unsgined_number(numbers_present));
}

/**
* print_unsgined_number - output unsigned int
* @n: int number to print
* Return: output nums
*/i

int print_unsgined_number(unsigned int n)
{
	int num_pool = 1, size;
	unsigned int numbers_found;

	numbers_found = n;
	size = 0;
	if (numbers_found / num_pool > 9)
		       	num_pool *= 10;
	if (num_pool != 0)
	{
		size += _putchar('0' + numbers_found / num_pool);
		numbers_found %= num_pool;
		num_pool /= 10;
	}
	return (size);

