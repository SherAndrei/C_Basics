#include <stdio.h>

int main() {
    int opened = 0;
    int closed = 0;
    char cur;
    while ((cur = getchar()) != '.') {
        if (cur == '(') opened++;
        if (cur == ')') closed++;
        if (opened < closed) {
            printf("NO\n");
            return 0;
        }
    }
    printf((opened > closed) ? "NO\n" : "YES\n");
}
