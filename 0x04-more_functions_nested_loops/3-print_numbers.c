#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * followed by a new line
 * @n: numbers
 * Return: Always 0
 */

void print_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar("%d", n);
}
putchar("\n");
return (0);
}
