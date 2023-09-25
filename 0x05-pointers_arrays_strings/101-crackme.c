#include <stdio.h>
#include <string.h>

int check_password(char *password) {
	char correct_password[] = "YourGeneratedPassword"; // Replace with the actual generated password

	return strcmp(password, correct_password) == 0;
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Usage: %s <password>\n", argv[0]);
		return 1;
	}

	if (check_password(argv[1])) {
		printf("Tada! Congrats\n");
	} else {
		printf("Try again\n");
	}

	return 0;
}
