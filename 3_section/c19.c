#include <stdio.h>
#include <ctype.h>

int main() {
    char cur;
    int sum = 0;
    while ((cur = getchar()) != '.') {
        if (isdigit(cur))
            sum += cur - '0';
    }
    printf("%d\n", sum);
}