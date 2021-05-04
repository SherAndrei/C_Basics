#include <stdio.h>

int recurs_pow(int n, int p) {
    return (p > 0) ? recurs_pow(n, p - 1) * n : 1;
}

int main() {
    int m, n;
    scanf("%u%u", &m, &n);
    printf("%d\n", recurs_pow(m, n));
}
