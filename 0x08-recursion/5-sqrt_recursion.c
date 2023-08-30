#include <stdio.h>
#include "main.h"
/**
* sqrt_recursive_helper - Helper function for calculating the square root recursively
* @n: The number for which to calculate the square root
* @start: The starting point of the search range
* @end: The ending point of the search range
*
* Return: The square root of n, or -1 if not found
*/
int sqrt_recursive_helper(int n, int start, int end)
{
int mid;

if (start <= end)
{
mid = start + (end - start) / 2;

if (mid * mid == n)
return (mid);

if (mid * mid > n)
return (sqrt_recursive_helper(n, start, mid - 1));

return (sqrt_recursive_helper(n, mid + 1, end));
}

return (-1);
}

/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: The number for which to calculate the square root
*
* Return: The square root of n, or -1 if not found
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (sqrt_recursive_helper(n, 0, n));
}
