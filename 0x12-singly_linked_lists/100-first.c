#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - a constructor function to run before the main
 * entry function
 *
 * Return: void
 */
void before_main(void)
{
	char *str_1 = "You're beat! and yet, you must allow,";
	char *str_2 = "I bore my house upon my back!";

	printf("%s\n%s\n", str_1, str_2);
}
