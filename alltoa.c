#include "holberton.h"
/**
* _alltoa - change int to character
* @i: the number
* @strings: string that lloca the numers changed
* @base: the base
* Return: a string with the numbers changed to characters
*/
char *_alltoa(unsigned i, char *strings, int base)
{
	char *str = strings;
	unsigned digit = 0;

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
	*str = '\0';
	_reverse(strings);
	return (strings);
}

