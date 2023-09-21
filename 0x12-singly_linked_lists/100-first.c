#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - Function to print a message before main function is executed.
 */

void before_main(void)
{
	printf("You're beat! and y");
	printf("et, you must allow,\nI bore my ho");
	printf("use upon my back!\n");
}
