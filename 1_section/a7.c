#include <stdio.h>

void minmax(int* pa, int *pb) {
    if (*pa > *pb) {
        int temp = *pa;
        *pa = *pb;
        *pb = temp;
    }
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    minmax(&a, &b);
    printf("%d %d\n", a, b);
}
