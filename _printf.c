#include "holberton.h"
/**
 * _printf - prints almost anything
 * @format: the argument limit
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int flag = 0;
	char buffer[2048] = {0};
	char *f = NULL;

	va_list ap;

	if (ap == NULL || format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(ap, format);

	f = (char *)format;
	for (i = 0; f[i] != '\0'; i++)
	{
		if (f[i] == '%')
		{
			i++;
			if (f[i] == 'c')
				flag += charac(buffer, va_arg(ap, int), flag);
			else if (f[i] == 's')
				flag += strings(buffer, va_arg(ap, char *), flag);
			else if (f[i] == 'd' || f[i] == 'i')
				flag += deci(buffer, va_arg(ap, int), flag);
			else if (f[i] == 'X')
				flag += hexa(buffer, va_arg(ap, int), flag);
			else if (f[i] == 'o')
				flag += octa(buffer, va_arg(ap, int), flag);
			else if (f[i] == '%')
				flag += porc(buffer, flag);
			else
				buffer[flag++] = f[--i];
		}
		else
			buffer[flag] = f[i],
			flag++;
	}
	write(1, buffer, flag);
	va_end(ap);
	return (flag);
}
