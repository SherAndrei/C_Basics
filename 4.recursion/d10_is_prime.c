#include <stdio.h>

int is_prime(int n, int factor) {
    return (n < 2) ? 0 :
           (factor == n) ? 1 :
           (n % factor == 0) ? 0 :
           is_prime(n, factor + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf((is_prime(n, 2)) ? "YES\n" : "NO\n");
}
