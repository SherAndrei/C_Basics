#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("Above\n");
    else if (a == b)
        printf("Equal\n");
    else
        printf("Less\n");
}
