#include "main.h"

int helper_sqrt(int n, int low, int high);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of @n, or -1 if no natural square root exists.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return helper_sqrt(n, 1, n);
    }
}

/**
 * helper_sqrt - Helper function to calculate the square root recursively.
 * @n: The number for which to calculate the square root.
 * @low: Lower bound of the range for square root calculation.
 * @high: Upper bound of the range for square root calculation.
 *
 * Return: The natural square root of @n within the given range, or -1 if not found.
 */
int helper_sqrt(int n, int low, int high)
{
    int mid = low + (high - low) / 2;

    if (low > high)
    {
        return -1;
    }

    if (mid * mid == n)
    {
        return mid;
    }
    else if (mid * mid < n)
    {
        return helper_sqrt(n, mid + 1, high);
    }
    else
    {
        return helper_sqrt(n, low, mid - 1);
    }
}
