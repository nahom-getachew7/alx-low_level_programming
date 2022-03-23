#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string one
 * @src: string two
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{

	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
/* Another way of doing it */
/*
	
	   char *_strcat(char *dest, char *src)
           {
               int dest_len = strlen(dest);
               int i;
	       
               for (i = 0 ; i < n && src[i] != '\0' ; i++)
                   dest[dest_len + i] = src[i];
               dest[dest_len + i] = '\0';
               return dest;
           }
*/
