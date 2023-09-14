#include "main.h"

/**
 * print_most_numbers - function checks for a digit (0 through 9)
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		if (ch != 50)
		{
			if (ch != 52)
			{
				_putchar(ch);
			}
		}
	}
	_putchar('\n');
}
