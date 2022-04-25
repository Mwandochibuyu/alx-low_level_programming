#include "main.h"
/**
 * *_strcat - like _strcat but it will use n bytes from src
 * @dest: string to be concatenated
 * @src: string to be concatenated until n limit
 * @n: number of bytes that will be used for src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[1] != '\0'; i++)
	for (j = 0; src[j] != '\0'; && n > 0; j++, i++)
	{
	dest[i] = src[j];
	}
	return (dest);
}
