#include <stdio.h>

int sum_ones_in_bitwise(unsigned n, int shift) {
    return (shift < 8 * sizeof(unsigned)) ? sum_ones_in_bitwise(n, shift + 1) + ((n & (1 << shift)) > 0) : 0;
}

int main() {
    unsigned n;
    scanf("%u", &n);
    printf("%d\n", sum_ones_in_bitwise(n, 0));
}
