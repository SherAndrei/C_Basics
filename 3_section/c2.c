#include <stdio.h>

int power(int n, int p) {
    int res = 1;
    for (int i = 0; i < p; i++)
        res *= n;
    return res;
}

int main() {
    int num, exp;
    scanf("%d%d", &num, &exp);
    printf("%d\n", power(num, exp));
}
