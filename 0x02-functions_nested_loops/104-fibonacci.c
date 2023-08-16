#include <stdio.h>

#define MAX_DIGITS 2000

void add_arrays(int res[], int a[], int b[]) {
    int carry = 0;
    int i;
    for (i = 0; i < MAX_DIGITS; i++) {
        res[i] = a[i] + b[i] + carry;
        carry = res[i] / 10;
        res[i] %= 10;
    }
}
int i;
void copy_array(int dest[], int src[]) {
    for (i = 0; i < MAX_DIGITS; i++) {
        dest[i] = src[i];
    }
}

void print_array(int arr[]) {
    int i = MAX_DIGITS - 1;
    while (i >= 0 && arr[i] == 0) {
        i--;
    }
    if (i == -1) {
        printf("0");
    } else {
        for (; i >= 0; i--) {
            printf("%d", arr[i]);
        }
    }
}
int i;
int main(void) {
    int fib1[MAX_DIGITS] = {0};
    int fib2[MAX_DIGITS] = {0};
    int temp[MAX_DIGITS] = {0};
    fib1[0] = 1;
    fib2[0] = 2;

    printf("1, 2");
    for (i = 3; i <= 98; i++) {
        add_arrays(temp, fib1, fib2);
        copy_array(fib1, fib2);
        copy_array(fib2, temp);

        printf(", ");
        print_array(fib2);
    }

    printf("\n");
    return 0;
}
