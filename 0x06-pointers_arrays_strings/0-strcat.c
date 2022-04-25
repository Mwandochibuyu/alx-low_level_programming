#include "main.h"
#include <string.h>
/**
 * _strcat - concatinate two string
 * @dest: first string
 * @src: second string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; desk[i] != '\0'; i++)
	{
	for (j = 0; j < n; j++)
	desk[i] = src[j];
	i++;
	}
	return (desk);

}
