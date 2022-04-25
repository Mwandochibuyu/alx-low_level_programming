#include "main.h"
/**
 * _strcat - concatinate two string
 * @dest: first string
 * @src: second string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	for (j = 0; j < n; j++)
	dest[i] = src[j];
	i++;
	}
	return (dest);

}
