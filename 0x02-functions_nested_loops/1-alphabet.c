#include "main.h"

void print_alphabet(void)
{
	char alpha = 'a';
	while (1)
	{
		_putchar(alpha);
		if (alpha == 'z')
			break;
		alpha++;
	}
	_putchar(10);
	return;
}
