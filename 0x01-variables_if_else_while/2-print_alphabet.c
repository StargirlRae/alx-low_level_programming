#include <stdio.h>
/**
 * main - print alphabets in lower case a-z
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)

		putchar(i);

	putchar('\n');
	return (0);
}
