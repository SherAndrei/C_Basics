#include <stdio.h>

int print(int a, int b) {
    if (a < b) {
        printf("%d ", a);
        print(a + 1, b);
    }
    if (a > b) {
        print(a, b + 1);
        printf("%d ", b);
    }
    if (a == b)
        printf("%d ", b);

    return 1;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    print(a, b);
}
