#include <stdio.h>

int is2pow(int n) {
    return (n > 1) ? (n % 2 == 0) ? is2pow(n / 2) : 0 : 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf((is2pow(n)) ? "YES\n" : "NO\n");
}
