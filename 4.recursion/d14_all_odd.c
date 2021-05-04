#include <stdio.h>

int all_odd() {
    int cur;
    scanf("%d", &cur);
    if (cur == 0)
        return 0;
    if (cur % 2)
        printf("%d ", cur);
    all_odd();
}

int main() {
    all_odd();
}
