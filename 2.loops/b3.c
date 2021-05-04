#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int i, sum = 0;
    for (i = a; i <= b; i++) {
        sum += i * i;
    }
    printf("%d\n", sum);
}
