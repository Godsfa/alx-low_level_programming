#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: prints all single digit numbers of base 10.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 48;
while (digit <= 57)
{
putchar(digit);
digit++;
}
putchar('\n');
return (0);
}
