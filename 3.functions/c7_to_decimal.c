#include <stdio.h>
#include <math.h>

int main() {
    int numb, base;
    scanf("%d%d", &numb, &base);
    int res = 0;
    for (int i = 0; numb != 0; i++) {
        res += pow(10, i) * (numb % base);
        numb /= base;
    }
    printf("%d\n", res);
}
