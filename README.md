# Implemetation of other Printf Function


# Description

This is a Project for Holberton Academy! A simple implementation of one of the most popular functions in coding, the **printf function**, and here we share with you our own function.


# Content

- Description
- Content
- Requeriments
- Flowchart
- Implemented functions
- Installation
- Build with
- Examples
- Especial thanks
- Autors


## Requeriments

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using  `gcc`, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   In the following examples, the  `main.c`  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  `main.c`  files at compilation. Our  `main.c`  files might be different from the one shown in the examples
-   The prototypes of all your functions should be included in your header file called  `holberton.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded
-   Note that we will not provide the  `_putchar`  function for this project


## Flowchart
![enter image description here](https://pbs.twimg.com/media/E7b4QTMWYAA1pPc?format=png&name=medium)


## Implemented functions

|  Function Name |         Description           |    Format Specification     |
|----------------|-------------------------------|-----------------------------|
|`_printf`       |Prints anything                |None                         |
|`charac`        |Prints characters              |`%c`                         |
|`strings`       |     Prints strings            |`%s`                         |
|`deci`          |Prints numbers in decimal and integers  |`%d` and `%i`       |
|`hexa`          |  Prints numbers in hexadecimal|`%X`                         |
|`octa`          |    Prints numbers in octagonal|`%o`                         |
|`porc`          |   Prints a porcent sign       |`%%`                         |
|`_itoa`         | Turns int to char             |None                         |
|`_strlen`       |  Give the length of a string  |None                         |
|`_strcpy`       |   Copy the string             |None                         |
|`_reverse`      |   Reverse the string          |None                         |


## Built with

We used only C programing language  and the Emacs text editor for this program , making use of loops, many conditionals, simple functions called by other files for this program such as our own **strlen** and **strcpy**  and following the normal nature of the **printf function**.
 See [Secrets of Printf](https://www.cypress.com/file/54761/download).
 All the files were compiled on Ubuntu 20.04 LTS using  `gcc`, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`.


## Installation

In order to use this function you need add the "holberton.h" library in your files, clone  the following repository in your local machine:
```
$ git clone https://github.com/Cr1st14n0l101/printf.git
```
Once done, enter to the folder
```
$ cd printf
```
Now, copy the man to this folder:
```
$ sudo cp man_3_printf /usr/local/man/man1
```
Compress the man page:
```
$ sudo gzip /usr/local/man/man1/man_3_printf
```
Add the new file in the database:
```
$ sudo mandb
```
Call the man page of _printf:
```
$ man man_3_printf
```
You can compile your code with this function of this way:
```
$ gcc *.c your_code -o name_code_exucutable
```


# Examples

```
cristian@DESKTOP-H6LS9OK:~/c/printf$ cat main.c
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
        unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
        addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}
cristian@DESKTOP-H6LS9OK:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o printf
cristian@DESKTOP-H6LS9OK:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003FF]
Unsigned hexadecimal:[800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
cristian@DESKTOP-H6LS9OK:~/c/printf$
```

## Special Thanks

*First of all we want to thank La Academia Holberton, who with their knowledge, resources and tools we have been able to carry out this project and each of its stages  to achieve the results we were looking for.
Thank you very much to all.*

## Authors
- [Cristian Oliveros](https://github.com/Cr1st14n0l101): *Two months ago I didn't know anything about the C programming language, and today I feel like I can do a lot of things and I hope to continue learning a lot more with Holberton and have a promising future.*
- [Angelica Rodríguez](https://github.com/angelicarm3): *I had no experience at all with coding. And the past couple of months have been quite an adventure, I'm proud to see how much I've grown and also excited about how much I will continue to.*