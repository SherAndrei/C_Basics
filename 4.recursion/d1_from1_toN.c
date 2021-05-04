#include <stdio.h>

int print(int n) {
    if (n > 1)
        print(n - 1);
    printf("%d ", n);
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    print(n);
}
