# **`printf`**


>Write your own `printf` function.


## Welcome
A reconstruction of the standard `printf` function in C. Our project requires a function capable of printing with the `%c`, `%s`, and `%%` specifiers on standard output. `printf` returns the number of characters printed (excluding the null byte at the end of strings). We have not been asked to handle identifying characters, field width, precision or length.
During our course we rarely use the standard C library, and build our own functions and headers. This project will be an example of that.

## The challenge of `printf
It's a complicated project to tackle. Not really knowing how to approach it, we started asking ourselves how it could work. Then we started to lay the foundations and start coding. After several tedious attempts, we came up with something resembling a base.

## Basic Specification Format
Our team chose to add `%c` ,`%s`, `%%` formatting. We relied on the library we have been building at Holberton as well as new concepts gathered during this project.

### Supported Format Types

| Type  | Output |
|:-----:|:------:|
| c | single character |
| s | string |
| % | percent sign |

### Examples

Character: printf("%c", 'A'); Output:: A

String: printf("%s", 'This is a string.'); Output: This is a string.

# Project Requirements
-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS
-   Your programs and functions will be compiled with `gcc` using the flags `-Wall -Werror -Wextra -pedantic -std=gnu89 -Who-format`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   The prototypes of all your functions should be included in your header file called `main.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded
-   Note that we will not provide the `_putchar` function for this project

### Prototype
#include "main.h"
```bash
int _printf(const char *format, ...);
```
### Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Who-format *.c
```
### Return Value
* The number of characters printed.

## Authors
* [**Quignon Valentine**](https://github.com/ValPumpkins)
* [**Boudier Christophe**](https://github.com/BIDcolonel)

## License
This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgments
* Deepl (for the translation)
* Cohort 21
* Holberton school Lille, FRANCE
