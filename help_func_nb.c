#include "main.h"
#include <ctype.h>
#include <limits.h>

/**
 * _helpNum - print an int number
 * @num: number
 * @args: args
 * @digits: number of digits in nb
 * @count: pointer to the counter of char printed
 * Return: len1 + len2
 */
int _helpNum(va_list args)
{
	int i, temp, digit, divide = 1, len1 = 0, len2 = 0;
	int num = va_arg(args, int);

	if (num == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		num = 147483648;
		len2 = 2;
	}

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		len2 = 1;
	}

	temp = num;
	while (temp != 0)
	{
		temp /= 10;
		len1++;
	}

	divide = 1;
	for (i = 1; i < len1; i++)
		divide *= 10;

	while (divide != 0)
	{
		digit = num / divide;
		num %= divide;
		divide /= 10;
		_putchar(digit + '0');
	}
	return (len1 + len2);
}

