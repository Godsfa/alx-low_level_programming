#include <stdio.h>
#include <stdlib.h>

int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return 0;
str++;
}
return 1;
}

int main(int argc, char *argv[])
{
unsigned long num1, num2, result;

if (argc != 3)
{
printf("Error\n");
return 98;
}

if (!is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return 98;
}

num1 = strtoul(argv[1], NULL, 10);
num2 = strtoul(argv[2], NULL, 10);
result = num1 * num2;

printf("%lu\n", result);

return 0;
}
