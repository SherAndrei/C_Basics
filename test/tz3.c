#include <stdio.h>
#include <ctype.h>

int main() {
    int counter = 0;
    char cur;
    while ((cur = getchar()) != '.') {
        if (isupper(cur))
            counter++;
    }
    printf("%d\n", counter);
}
