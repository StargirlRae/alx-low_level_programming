#include "main.h"
/**
 * print_alphabets - print alphabets
 *
 * @c: print_alphabet
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

