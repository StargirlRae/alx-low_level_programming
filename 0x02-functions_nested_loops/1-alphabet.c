#include "main.h"
/**
 * print_alphabets - print alphabets
 *
 * Description: Print_alphabet using _putchar
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

