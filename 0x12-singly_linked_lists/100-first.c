#include <stdio.h>

void excute_before_main(void) __attribute__((constructor));

/**
 * excute_before_main - Executes a function before the
 * main function is executed.
 */
void excute_before_main(void)
{
char str1[] = "You're beat!";
printf("%s\nand yet, you must allow,\nI bore my house upon my back!\n", str1);
}
