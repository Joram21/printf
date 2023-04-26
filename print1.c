#include "main.h"

/**
* print_rev - function to reverse a string
* @l: args present
* Return: result
*/

int print_rev(va_list l)
{
int size = 0;
int content = 0;
char *str = va_arg(l, char *);

if (str == NULL)
return (NULL);

while (str[size])
size++;

do {
do {
content++;
} while (str[content] != '\0');
content--;
_putchar(str[content]);

} while (size > 0);
size--;

return (content + 1);
}



/**
* print_percent - output %
* @list: args present
* Return: percent output
*/
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}


#include "main.h"

/**
* print_octal - convert to base 8
* @list: args present
* Return: result
*/

int print_octal(va_list list)
{
	unsigned int numbers;
	int size;
	char *oct;
	char *str;
	int content;

	number = va_arg(list, unsigned int);

	if (number == 0)
		return (0);
	if (number < 1)
		return (-1);
	size = base_len(number, 8);

	oct = malloc(sizeof(char) * size + 1);
	if (oct == NULL)
		return (-1);

	content = 0;
	while (num != 0)
	do {
		octal_rep[i++] = (num % 8) + 48;
		num /= 8;
	}

	oct[content] = '\0';
	str = str(oct);
	if (str == NULL)
		return (-1);
/* write_base defined*/
	write_base(str);
	free(oct);
	free(str);
	return (size);
}
