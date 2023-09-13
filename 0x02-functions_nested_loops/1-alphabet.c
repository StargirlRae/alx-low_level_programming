#include "main.h"
/**
 * print_alphabets - print alphabets
 *
 * Description: using _putchar to print
 */
void print_alphabet(void)
{
	char al;

	al = 'a';
	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}

