#include <stdio.h>

int print_digit(int n) {
    printf("%d ", n % 10);
    n /= 10;
    return (n > 0) ? print_digit(n) : 1;
}

int main() {
    int n;
    scanf("%d", &n);
    print_digit(n);
}
