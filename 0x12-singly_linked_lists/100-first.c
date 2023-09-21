#include <stdio.h>
#include "lists.h"
void excute_before_main(void) __attribute__((constructor));

/**
 * excute_before_main - Executes a function before the
 * main function is executed.
 */
void excute_before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
