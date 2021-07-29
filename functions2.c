#include "holberton.h"
/**
 * hexa - change the '%' for the argument
 * @buffer: the string to print
 * @hexadeci: the argument
 * @flag: the count of characters printed
 * Return: the number of characters changed
 */
int hexa(char *buffer, int hexadeci, int flag)
{
	char num[100];

	_alltoa(hexadeci, num, 16);
	_strcpy(&buffer[flag], num);
	return (_strlen(&buffer[flag]));
}
/**
 * octa - change the '%' for the argument
 * @buffer: the string to print
 * @octago: the argument
 * @flag: the count of characters printed
 * Return: the number of characters changed
 */
int octa(char *buffer, int octago, int flag)
{
	char num[100];

	_alltoa(octago, num, 8);
	_strcpy(&buffer[flag], num);
	return (_strlen(&buffer[flag]));
}
