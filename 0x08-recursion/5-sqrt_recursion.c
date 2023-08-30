#include "main.h"

/**
* _sqrt_recursion - Calculates the natural square root of a number.
* @n: The number for which to find the square root.
*
* Return: The square root of @n if found, otherwise -1.
*/
int _sqrt_recursion(int n);

/**
* sqrt_recursive_helper - Helper function to find the square root recursively.
* @n: The number for which to find the square root.
* @low: The lower bound of the search range.
* @high: The upper bound of the search range.
*
* Return: The square root of @n if found, otherwise -1.
*/
int sqrt_recursive_helper(int n, int low, int high)
{
if (low <= high)
{
int mid = low + (high - low) / 2;
int square = mid * mid;

if (square == n)
{
return (mid);
}
else if (square < n)
{
return (sqrt_recursive_helper(n, mid + 1, high));
}
else
{
return (sqrt_recursive_helper(n, low, mid - 1));
}
}

return (-1);
}

/**
* _sqrt_recursion - Calculates the natural square root of a number.
* @n: The number for which to find the square root.
*
* Return: The square root of @n if found, otherwise -1.
*/
int _sqrt_recursion(int n)
{
    return (sqrt_recursive_helper(n, 0, n));
}
