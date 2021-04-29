#include <stdio.h>
#include <ctype.h>

int main() {
    char digit;
    int prod = 1;
    int sum = 0;
    while (digit = getchar()) {
        if (!isdigit(digit))
            break;
        sum += digit - '0';
        prod *= digit - '0';
    }
    printf((sum ==prod) ? "YES\n" : "NO\n");
}
