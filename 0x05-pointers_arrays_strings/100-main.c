#include "main.h"
#include <stdio.h>

int main(void)
{
	char *strings[] = {
		"98",
		"-402",
		"-98",
		"214748364",
		"Hello",
		"0",
		"402",
		"98",
		"402"
	};

	int i;
	for (i = 0; i < 9; i++)
	{
		int n = _atoi(strings[i]);
		printf("%d\n", n);
	}

	return (0);
}
