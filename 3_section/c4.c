#include <stdio.h>

int f(int x) {
    if (x < -2) return 4;
    else if (x >= 2) return x * x + 4 * x + 5;
    else return x * x;
}

int main() {
    int current;
    int max;
    scanf("%d", &current);
    max = f(current);
    while (scanf("%d", &current) == 1 && current != 0)
        if (max < f(current)) max = f(current);
    printf("%d\n", max);
}
