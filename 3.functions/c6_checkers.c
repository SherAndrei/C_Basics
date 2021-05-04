#include <stdio.h>

int main() {
    int n;
    unsigned long long amount = 1;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
        amount *= 2;
    printf("%llu\n", amount);
}
