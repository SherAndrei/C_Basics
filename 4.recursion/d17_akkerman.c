#include <stdio.h>

unsigned akkerman(unsigned m, unsigned n) {
    if (m == 0)
        return n + 1;
    if (m > 0 && n == 0)
        return akkerman(m - 1, 1);
    if (m > 0 && n > 0)
        return akkerman(m - 1, akkerman(m, n - 1));
}

int main() {
    unsigned m, n;
    scanf("%u%u", &m, &n);
    printf("%u\n", akkerman(m, n));
}
