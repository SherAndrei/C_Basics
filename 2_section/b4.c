#include <stdio.h>
#include <ctype.h>

int main() {
    char digit;
    int nsymbols = 0;
    while (digit = getchar()) {
        if (!isdigit(digit))
            break;
        nsymbols++;
    }

    printf((nsymbols == 3) ? "YES\n" : "NO\n");
}
