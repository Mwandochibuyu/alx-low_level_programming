#include "main.h"
/**
 * print_last_digit - funtion that prints the last digit
 * @n: takes ln an integer
 * Return: returns output
 */
int print_last_digit(int)
{
	int ln = n % 10;

	if (n < 0)
		ln = ln * -1;
	_putchar(ln + '0');
	return (ln);
}
