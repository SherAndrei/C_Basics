#include <stdio.h>

int do_sum(int n) {
    return (n > 1) ? n + do_sum(n - 1) : 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", do_sum(n));
}
