#include "main.h"
/**
* print_hex_aux - Displays an hexadecimal number.
* @num: arguments passed
* Return: numerical sum
*/
int print_hex_aux(unsigned long int num)
{
	long int j;
	long int *arr;
	long int numerating = 0;
	unsigned long int tamp = n;

	while (n / 16 != 0)
	{
		n /= 16;
		numerating++;
	}
	numerating++;
	arr = malloc(numerating * sizeof(long int));

	j = 0;
	for (; tamp != 0; j++)
	{
		arr[j] = tamp % 16;
		tamp /= 16;
	}

	j--;
	for (; j >= 0; j--)
	{
		if (arr[j] > 9)
			arr[j] = arr[j] + 39;
	_putchar(arr[j] + '0');
	}

	free(arr);
	return (numerating);
}
