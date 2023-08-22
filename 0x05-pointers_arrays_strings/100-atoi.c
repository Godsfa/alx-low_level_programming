/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to be converted
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
    int sign = 1; // To handle negative numbers
    int result = 0;
    int i = 0;

    // Handle leading signs
    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    // Convert the numeric characters to integer
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}
