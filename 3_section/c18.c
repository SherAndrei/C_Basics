#include <stdio.h>
#include <ctype.h>

int main() {
    char cur;
    int counter = 0;
    while ((cur = getchar()) != '.') {
        if (isdigit(cur))
            counter++;
    }
    printf("%d\n", counter);
}