#include "main.h"
#include <stdio.h>

int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", len);
	printf("%d\n", len2);

	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("%d\n", len);
	printf("%d\n", len2);

	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("%d\n", len);
	printf("%d\n", len2);

	len = _printf("Unknown:[%r]\n");
	len2 = printf("Unknown:[%r]\n");
	printf("%d\n", len);
	printf("%d\n", len2);

	len = _printf("[%%]\n");
	len2 = printf("[%%]\n");
	printf("%d\n", len);
	printf("%d\n", len2);

	len = _printf("%s", (char *)0);
	putchar('\n');
	len2 = printf("%s", (char *)0);
	putchar('\n');
	printf("%d\n", len);
	printf("%d\n", len2);

	return (0);
}
