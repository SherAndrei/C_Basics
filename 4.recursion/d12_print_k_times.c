#include <stdio.h>

int nelems = 0;

int print_sequence(unsigned k, int step) {
    for (int i = 0; i < step && nelems < k; i++, nelems++)
        printf("%d ", step);
    return (nelems < k) ? print_sequence(k, step + 1) : 0;
}

int main() {
    unsigned k;
    scanf("%u", &k);
    print_sequence(k, 1);
}
