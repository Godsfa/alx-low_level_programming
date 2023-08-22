#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
	srand(time(NULL));

	int password_length = rand() % 10 + 1; /* Random password length from 1 to 10*/

	for (int i = 0; i < password_length; i++)
	{
		/* Generate a random character between ASCII values 33 ('!') and 126 ('~')*/
		char random_char = (rand() % (126 - 33 + 1)) + 33;

		/* Print the generated character*/
		putchar(random_char);
	}

	putchar('\n');
	return (0);
}
