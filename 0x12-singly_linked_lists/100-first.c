#include <stdio.h>

/**
 * premain - executes code before main
 */

void __attribute__ ((constructor)) premain()
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
