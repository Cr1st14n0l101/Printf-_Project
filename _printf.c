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
	char buffer[1000] = {0};
	char *f = NULL;

	va_list ap;

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
			else if (f[i] == 'u')
				flag += hexa(buffer, va_arg(ap, int), flag);
			else if (f[i] == 'x'  || f[i] == 'X')
				flag += octa(buffer, va_arg(ap, int), flag);
			else if (f[i] == '%')
				flag += porc(buffer, flag);
		}
		else
			buffer[flag] = f[i],
			flag++;
	}
	write(1, buffer, flag);
	va_end(ap);
	return (flag);
}
