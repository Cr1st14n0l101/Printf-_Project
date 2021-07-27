#include "holberton.h"
/**
 * charac - change the '%' for the argument
 * @buffer: the string to print
 * @character: the argument
 * @flag: the count of characters printed
 * Return: the number of characters changed
 */
int charac(char *buffer, char character, int flag)
{
	int const count = 1;

	buffer[flag] = character;
	return (count);
}
/**
 * strings - change the '%' for the argument
 * @buffer: the string to print
 * @string: the argument
 * @flag: the count of characters printed
 * Return: the number of characters changed
 */
int strings(char *buffer, char *string, int flag)
{
	_strcpy(&buffer[flag], string);
	return (_strlen(string));
}
/**
 * deci - change the '%' for the argument
 * @buffer: the string to print
 * @decimals: the argument
 * @flag: the count of characters printed
 * Return: the number of characters changed
 */
int deci(char *buffer, int decimals, int flag)
{
	char num[100];

	_itoa(decimals, num, 10);
	_strcpy(&buffer[flag], num);
	return (_strlen(&buffer[flag]));
}
/**
 * porc - change the '%' for the argument
 * @buffer: the string to print
 * @flag: the count of characters printed
 * Return: the number of characters changed
 */
int porc(char *buffer, int flag)
{
	int const count = 1;
	char *porcent = "%";

	buffer[flag] = *porcent;
	return (count);
}
