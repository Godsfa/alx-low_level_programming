#include "main.h"
#include <limits.h> /* Include the header for INT_MAX and INT_MIN */

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1; /* Default positive sign */
	long result = 0; /* Use long to handle overflow */
	int seen_number = 0; /* Flag to track if we've seen any digits */

	/* Check for negative sign */
	if (*s == '-')
	{
		sign = -1;
		s++; /* Move to the next character */
	}

	/* Iterate through each character of the string */
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			seen_number = 1;
			s++;
		}
		else if (seen_number)
		{
			/* If we've seen digits and encounter a non-digit character, stop */
			break;
		}
		else
		{
			s++;
		}
	}

	result *= sign; /* Apply the sign */

	/* Handle overflow */
	if (result > INT_MAX)
	{
		return INT_MAX;
	}
	else if (result < INT_MIN)
	{
		return INT_MIN;
	}
	else
	{
		return (int)result;
	}
}

