
<h1><p align="center">_printf</p></h1>

<p align="center"> Our simplified implementation of the printf function in C language</p>

##  <p align="center"> 💪 The _printf challenge</p>

<p>This project is a simplified implementation of the <strong>printf function</strong> in C language. The <strong>_printf function</strong> allows you to produce formatted output to the console, displaying strings and values specified by format specifiers.</p>
<p>Printf returns the number of characters printed (excluding the null byte at the end of strings). We have not been asked to handle identifying characters, field width, precision or length. During our course we rarely use the standard C library, and build our own functions and headers.

<strong>This project will be an great example of that</strong> 🚀</p>

## ✅ Project Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All our files will be compiled on **Ubuntu 20.04 LTS**
- All our files should end with a new line
- A **README.md** file, at the root of the folder of our project is mandatory
- Our code should use the `Betty` style. It will be checked using
[betty-style.pl](**https://www.google.com**) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- No more than 5 functions per file
- We are not allowed to use global variables
- The prototypes of all our functions are included in our header file called `main.h`
- All our header files should be include guarded

## Step1 - How to Use the _printf Function

The _printf function is used in the same way as the standard printf function from the C standard library.
#### Here is the function prototype:

```c
int _printf(const char *format, ...);
```
`format`: This is a character string that contains the text to be printed, along with format specifiers. Format specifiers are preceded by the `%` character and indicate the type and format of the additional arguments that will be printed.

The **_printf function** parses the format string and replaces each format specifier with the appropriate value from the additional arguments. The format specifiers control how the values are formatted before being printed.

## Step2 - Basic Specification Format
Our team chose to add `%c` ,`%s`, `%%`, `%d` & `%i`  formatting. We relied on the library we have been building at Holberton as well as new concepts gathered during this project.

| Type  | Output |
|:-----:|:------:|
| c | single character |
| s | string |
| % | percent sign |
| d | integer in base 10 |
| i | integer in base 10 |

### 🔄 Return Value

The _printf function returns the number of characters displayed or `-1 `in case of an error.

## Step3 - Compilation
To compile the project, the GCC (GNU Compiler Collection) compiler can be use with the following command:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

## Step4 - Exemple usage
```c
int main(void)
{
        int number = 21;
        char *str = "new";

        len = _printf("Holberton School presents the %s students who will be joining the cohort %d this year.", str, number);
         _printf("The number of characters printed: %d\n", len);

        return (0);
}
```
↪️ Output:

`Holberton School presents the new students who will be joining the cohort 21 this year.  The number of characters printed: 92.`

## 👊 Testing

To validate the correctness of the implementation, we compared the output of our **_printf function** with the output of **the standard printf function** for similar test cases, ensuring they matched.

```c
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```
↪️ Output:

```bash
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```
During the development of this project, we extensively tested the _printf function using various test cases. We used both standard input and edge cases to ensure its correctness. Additionally, we used Valgrind to check for memory leaks and address any memory-related issues.

## Step5 - Our man page

We have also created a corresponding man page for the **_printf function**, providing detailed information about its usage and available format specifiers. To access the man page, run the following command in your terminal:

`man ./man_3_printf`

The man page will provide comprehensive documentation for the **_printf function** and how to use it effectively in your C programs.

## 🔨 Tools
- [Github](https://github.com/)
- [Readmi](https://readmi.xyz/)
- [Flowchart](https://app.diagrams.net/)

## 👥 Team
👨‍💻 Christophe Boudier *aka* [Bidcolonel](https://github.com/BIDcolonel)

👩‍💻 Valentine Quignon *aka* [ValPumpkins](https://github.com/ValPumpkins)

## 🙏 Acknowledgments

- The entire **Cohort 21**, for their help, psychological and technical support
- All the team of **Holberton school Lille**, FRANCE
- **Deepl**, for all the free translation

## ©️ License
This project is licensed under the MIT License - see the **LICENSE** file for details.
