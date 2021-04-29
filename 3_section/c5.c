#include <stdio.h>

int main() {
    unsigned long sum = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum += i;
    printf("%lu\n", sum);
}
