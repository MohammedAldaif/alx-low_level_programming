#include <stdio.h>
#include "lists.h"

void before_main(void) __attribute__((constructor));

/**
 * before_main - Function to print a message before main function is executed.
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI
	 bore my house upon my back!\n");
}
