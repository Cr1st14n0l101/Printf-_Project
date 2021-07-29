% _PRINTF(3) _printf 1.0
% Cristian Oliveros & Angelica Rodriguez
% July 2021

# NAME
_printf - formats and prints data 

# SYNOPSIS
#include "holberton.h"

int _printf(const char *format, ...)

# DESCRIPTION
_printf writes output to *stdout*, the standar output stream, according to a *format* as described below.

## Format of the format string
The format string is a character string composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification is introduced by the character %, and ends with a conversion specifier.

The arguments must correspond properly with the conversion specifier. By default, the arguments are used in the order given, where each conversion specifier asks for the next argument (and it is an error if insufficiently many arguments are given).

    	      _printf("%d", num);

## Conversion specifiers
A character that specifies the type of conversion to be applied.\
The conversion specifiers and their meanings are:
   
d, i
: The int argument is converted to signed decimal notation.

o, X 
: The unsigned int argument is converted to unsigned octal (o), or unsigned hexadecimal (X) notation. the letters ABCDEF are used for X conversions.  

c
: The int argument is converted to an unsigned char, and the resulting character is written.

s
: The const char * argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up to (but not including) a terminating null byte ('\0').

%
: A '%' is written. No argument is converted.  The complete conversion specification is '%%'.

# RETURN VALUE

Upon successful return, these functions return the number of characters printed (excluding the null byte used to end output to strings).

If an output error is encountered, a negative value is returned (-1).

# EXAMPLES

To print a date and time in the form "Sunday, July 3, 10:02", where weekday and month are pointers to strings:

           #include <stdio.h>
	   
           _printf("%s, %s %d, %d:%d\n", weekday, month, day, hour, min);


# COPYRIGHT

Copyright © 2021 Holberton School. this is free software: you are free to change and redistribute it. There is NO WARRANTY, to the extent permitted by law.
