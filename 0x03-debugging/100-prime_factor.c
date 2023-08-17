#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number
 * Return: The largest prime factor
 */
long largest_prime_factor(long n)
{
	long factor = 2;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}

	return (factor);
}

int main(void)
{
	long num = 612852475143;
	long result = largest_prime_factor(num);

	printf("%ld\n", result);

	return (0);
}
