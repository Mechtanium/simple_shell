#include "main.h"

/**
 * _strcmp - compare two stings
 * @str1: First string
 * @str2: Second string
 *
 * Description: Simple string comparison
 * Return: 1 for true and 0 for false.
 */
int _strcmp(char *str1, char *str2)
{
	int sl1 = 0, sl2 = 0;

	while (str1[sl1])
		sl1++;

	while (str2[sl2])
		sl2++;

	if (sl1 != sl2)
		return (0);

	sl1 = 0;
	while (str1[sl1] == str2[sl1] && str1[sl1])
		sl1++;

	if (sl1 == sl2)
		return (1);

	return (0);
}

/**
 * _strcpy - copies one string into another
 * @str1: First string, copied into
 * @str2: Second string, copied from
 * @s: Integer size of first strings memory in bytes.
 *
 * Description: People copy string with equals. C is ridiculous
 * Return: 1 if the copy succeeded or 0 if it failed.
 */
int _strcpy(char *str1, char *str2, int s)
{
	int i = 0, j = 0;

	while (str2[j])
		j++;

	if (j < s)
	{
		while (str2[i])
			str1[i] = str2[i];
		str1[i] = '\0';
		return (0);
	}

	return (1);
}

