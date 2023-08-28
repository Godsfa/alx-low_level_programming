#include "main.h"
#include <stdio.h>

int main(void)
{
	char *num1 = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
	char *num2 = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
	char result[100];

	if (infinite_add(num1, num2, result, sizeof(result)))
		printf("%s + %s = %s\n", num1, num2, result);
	else
		printf("Error\n");

	return (0);
}

