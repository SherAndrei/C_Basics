#include <stdio.h>
#include <ctype.h>

int main() {
    char digit;
    int max = 0;
    while (digit = getchar()) {
        if (!isdigit(digit))
            break;
        if (max < digit - '0')
            max = digit - '0';
    }
    printf("%d\n", max);
}
