#ifndef _HOLBERTON
#define _HOLBERTON

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int _printf(const char *format, ...);
char *_itoa(int i, char *strout, int base);
/*function cases*/
int charac(char *buffer, char character, int flag);
int strings(char *buffer, char *string, int flag);
int deci(char *buffer, int decimals, int flag);
int hexa(char *buffer, int decimals, int flag);
int octa(char *buffer, int decimals, int flag);
int integ(char *buffer, int integer, int flag);
int porc(char *buffer, int flag);
/*funcions*/
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void _reverse(char s[]);

#endif
