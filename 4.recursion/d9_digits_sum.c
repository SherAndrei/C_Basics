#include <stdio.h>

int do_digit_sum(int n) {
    return (n / 10 > 0) ? do_digit_sum(n / 10) + n % 10 : n % 10;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", do_digit_sum(n));
}
