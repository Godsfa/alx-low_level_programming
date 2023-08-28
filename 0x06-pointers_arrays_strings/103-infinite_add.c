#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r);

int main(void)
{
    char num1[] = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
    char num2[] = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
    int buffer_size = 200;
    char result[buffer_size];

    char *sum = infinite_add(num1, num2, result, buffer_size);

    if (sum)
    {
        printf("Sum: %s\n", sum);
    }
    else
    {
        printf("Result cannot be stored in the buffer.\n");
    }

    return 0;
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int i, j;

    if (len1 + len2 >= size_r)
        return (0);

    int carry = 0;
    int index = 0;

    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry > 0; i--, j--)
    {
        int digit1 = (i >= 0) ? n1[i] - '0' : 0;
        int digit2 = (j >= 0) ? n2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[index++] = (sum % 10) + '0';
    }

    r[index] = '\0';

    for (i = 0, j = index - 1; i < j; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    return (r);
}

