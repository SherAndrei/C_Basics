#include <stdio.h>

int to_two_base(int n) {
    return (n > 0) ? to_two_base (n / 2) * 10 + n % 2 : n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", to_two_base(n));
}
