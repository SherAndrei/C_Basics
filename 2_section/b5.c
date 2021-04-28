#include <stdio.h>
#include <ctype.h>

int main() {
    char digit;
    int sum = 0;
    while (digit = getchar()) {
        if (!isdigit(digit))
            break;
        sum += digit - '0';
    }
    printf("%d\n", sum);
}
