#include <stdio.h>
#include <ctype.h>

int main() {
    char digit;
    int prod = 1;
    while (digit = getchar()) {
        if (!isdigit(digit))
            break;
        prod *= digit - '0';
    }
    printf("%d\n", prod);
}
