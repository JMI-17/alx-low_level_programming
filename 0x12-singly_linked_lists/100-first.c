#include <stdio.h>
void pre_main_message(void) __attribute__((constructor));
/**
* pre_main_message - Function to print a message before main.
*/
void pre_main_message(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
