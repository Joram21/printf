#include "main.h"

/**
 * print_number - function to print nums
 * @args: arguments passed
 * Return: 0(success)
 */

int print_number(va_list args)
{
	int n;
	int check;
	int len;
	unsigned int num;

	n  = va_arg(args, int);
	check = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / check > 9; )
		check *= 10;

	for (; check != 0; )
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}

	return (len);
}


/**
 * print_unsgined_number - print unsigned num
 * @n: the number
 * Return: len
 */
int print_unsgined_number(unsigned int n)
{
	int check;
	int len;
	unsigned int num;

	check = 1;
	len = 0;

	num = n;

	for (; num / check > 9; )
		check *= 10;

	for (; check != 0; )
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}

	return (len);
}


/**
 * p_char - fun to print chars
 * @args: arguments passed in the function
 * Return: printed value
 */


int p_char(va_list args)
{
	char value;

	value = va_arg(args, int);
	_putchar(value);
	return (1);
}

/**
 * p_string - func to print string
 * @args: arguments
 * Return: printed character
 */

int p_string(va_list args)
{
	int i;
	const char *s;

	s = va_arg(args, const char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * p_percent - fun to print %
 * @args: args
 * Return: printed character
 */

int p_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}


/**
 * p_integer - fun to print int
 * @args: args
 * Return: printed character
 */
int p_integer(va_list args)
{
	int n;

	n = print_number(args);
	return (n);

}
