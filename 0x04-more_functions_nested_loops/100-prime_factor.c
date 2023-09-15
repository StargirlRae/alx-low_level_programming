#include <stdio.h>

/**
 * main - func finds and prints the largest prime
 * factor of the num 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	long prime = 612852475143, divisor;

	while (divisor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (divisor = 3; divisor < (prime / 2); divisor += 2)
		{
			if ((prime % divisor) == 0)
				prime /= divisor;
		}

	}
	printf("%1ld\n", prime);

	return (0);
}
