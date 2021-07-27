#include "holberton.h"
/**
* _itoa - change int to character
* @i: the number
* @strings: string that lloca the numers changed
* @base: the base
* Return: a string with the numbers changed to characters
*/
char *_itoa(int i, char *strings, int base)
{
	char *str = strings;
	int digit = 0;
	int sign = 0;

	if (i < 0)
		sign = 1,
			i = -i;
	while (i)
	{
		digit = i % base;
		if (digit > 9)
			*str = 'A' + digit - 10;
		else
			*str = '0' + digit;
		i = i / base;
		str++;
	}
	if (sign == 1)
		*str++ = '-';
	*str = '\0';
	_reverse(strings);
	return (strings);
}
/**
* _reverse - reverse the string
* @s: the string to reverse
* Return: void
*/
void _reverse(char *s)
{
	int i, j, k, m;
	char tmp1, tmp2;

	for (i = 0; s[i] != '\0'; i++)
		;
	j = i;

	for (m = 0, k = j - 1; m < j / 2; m++, k--)
	{
		tmp1 = s[m];
		tmp2 = s[k];
		s[m] = tmp2;
		s[k] = tmp1;
	}
}
