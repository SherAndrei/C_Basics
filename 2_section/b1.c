#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int i;
    for (i = 1; i <= num; i++) {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
}
