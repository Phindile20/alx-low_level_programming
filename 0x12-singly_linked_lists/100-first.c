#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * first - a function that prints You're beat! and yet, you must allow
 * nI bore my house upon my back!
 * before the main function is executed
 */
void __attribute__((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
