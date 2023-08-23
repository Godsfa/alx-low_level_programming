#include <stdio.h>
#include <string.h>

/**
 * main - rite a function that adds two numbers.
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Return: A pointer to the result, or 0 if the result could not be stored.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r);

int main(void)
{
	char num1[] = "123456789";
	char num2[] = "987654321";
	char result[20];

	if (infinite_add(num1, num2, result, sizeof(result)))
	{
		printf("Sum: %s\n", result);
	}
	else
	{
		printf("Result could not be stored in the buffer.\n");
	}

	return (0);
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = len1 > len2 ? len1 : len2;
	int i;

	if (max_len + 1 > size_r)
	{
		return (0); /* Result cannot be stored in r */
	}

	r[size_r - 1] = '\0'; /* Null-terminate the result buffer*/

	for (i = 0; i < max_len || carry; ++i)
	{
		int sum = carry;

		if (len1 > 0)
		{
			sum += n1[--len1] - '0';
		}

		if (len2 > 0)
		{
			sum += n2[--len2] - '0';
		}

		carry = sum / 10;
		r[size_r - 2 - i] = sum % 10 + '0';
	}

	return (r + size_r - 1 - i);
}

