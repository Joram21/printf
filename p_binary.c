#include "main.h"

/**
* print_binary - Changes number from base 10 to binary
* @list: List of arguments passed
* Return: length of the number printed
*/

int print_binary(va_list list)
{
	unsigned int n;
	int c = 0, len;
	char *s;
	char *rev_s;

	n = va_arg(list, unsigned int);
	if (n == 0)
		return (_putchar('0'));
	if (n < 1)
		return (-1);
	len = base_len(n, 2);
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (-1);

	for (; n != 0; n /= 2)
	{
		s[c++] = (n % 2 == 0) ? '0' : '1';
	}

	s[c] = '\0';
	rev_s = rev_string(s);
	if (rev_s == NULL)
		return (-1);
	write_base(rev_s);
	free(s);
	free(rev_s);
	return (len);
}
