#include <stdlib.h>

/**
* is_space - Checks if a character is a space.
* @c: The character to check.
*
* Return: 1 if it's a space, 0 otherwise.
*/

int is_space(char c) {
return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str) {
int in_word = 0;
int count = 0;

while (*str) {
if (is_space(*str)) {
   in_word = 0;
} else if (!in_word) {
in_word = 1;
count++;
}
str++;
}

return (count);
}

char **strtow(char *str) {
int num_words = count_words(str);
char **words;
char **words_start;
int in_word = 0;

if (str == NULL || num_words == 0)
return (NULL);

words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
    return (NULL);

words_start = words;

while (*str) {
if (is_space(*str)) {
in_word = 0;
} else if (!in_word) {
in_word = 1;
*words = str;
words++;
}
str++;
}

*words = NULL;

return (words_start);
}
