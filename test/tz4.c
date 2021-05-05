#include <stdio.h>

int check(int num) {
    int sum = 1;
    int ncopy = num;
    if (ncopy == 1)
        return 0;
    for (int i = 2; i < ncopy; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == ncopy);
}


int main () {
    int cur;

    while (1) {
        scanf("%d", &cur);
        if (cur == 0)
            break;
        if (check(cur))
            printf("%d ", cur);
    }
}
