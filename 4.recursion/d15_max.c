#include <stdio.h>

int max_find(int max) {
    int current;
    scanf("%d", &current);
    if (current == 0) return max;
    max_find((current >= max) ? current : max);
}

int main() {
    int max;
    scanf("%d", &max);
    printf("%d\n", max_find(max));
}
