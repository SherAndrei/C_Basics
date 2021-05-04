#include <stdio.h>

int ncopy;

void print_simple(int n, int factor) {
    while (n % factor == 0) {
        printf("%d ", factor);
        n = n/factor;
    }
    return (factor < ncopy) ? print_simple(n, factor + 1) : 0;
}

int main() {
    int n;
    scanf("%d", &n);
    ncopy = n;
    print_simple(n, 2);
}
