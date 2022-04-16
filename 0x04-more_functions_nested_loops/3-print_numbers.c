#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * followed by a new line
 * @n: numbers
 * Return: Always 0
 */

void print_numbers(void)
{
char n;
for (n = 0; n <= 9; n++)
{
_putchar("%c", n);
}
_putchar("\n");
return (0);
}
