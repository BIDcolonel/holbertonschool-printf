#include "main.h"

/**
* _helperInt - func to handle the int format specifier
* @args: arguments
* @count: pointer to the counter of char printed
*/
void _helperInt(va_list args, int *count)
{
	int num = va_arg(args, int);
	int digits = _numLen(num);

	_printNum(num, digits, count);
}

/**
 * _numLen - func to get the nb of digits in a nb
 * @num: number
 * Return: nb of digits
 */
int _numLen(int num)
{
	int count = 0;

	if (num == 0)
		return (1);

	while (num != 0)
	{
		num /= 10;
		count++;
	}

	return (count);
}

/**
 * _printNum - print an int number
 * @num: number
 * @digits: number of digits in nb
 * @count: pointer to the counter of char printed
 */
void _printNum(int num, int digits, int *count)
{
	int i;
	int divide = 1;

	if (num < 0)
	{
		_printChar('-', count);
		num *= -1; // change le signe de la variable num si négatif w/ char '-'
	}

	for (i = 1; i < digits; i++) // Calculer la puissance de 10 nécessaire
		divide *= 10;

	while (divide != 0)
	{
		_printChar((num / divide) + '0', count);
		num %= divide; // maj de num avec le reste de sa division
		divide /= 10; // divise par 10
	}
}

