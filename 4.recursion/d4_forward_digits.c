#include <stdio.h>

int print_digit(int n) {;
    if (n / 10 > 0)
        print_digit(n / 10);
    printf("%d ", n % 10);
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    print_digit(n);
}
