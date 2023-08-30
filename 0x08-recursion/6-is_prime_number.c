#include "main.h"

int check_prime(int n, int divisor);
/**
* is_prime_number - Checks if the input integer is a prime number.
* @n: The number to be checked.
*
* Return: 1 if @n is prime, 0 otherwise.
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return(0);
}
else{
return check_prime(n, 2);
}
}

/**
* check_prime - Helper function to check if a number is prime recursively.
* @n: The number to be checked.
* @divisor: The divisor to check if @n is divisible by.
*
* Return: 1 if @n is prime, 0 otherwise.
*/

int check_prime(int n, int divisor)
{
if (divisor >= n)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return check_prime(n, divisor + 1);
}