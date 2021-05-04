#include <stdio.h>

int counter = 0;

int acounter() {
    char letter = getchar();
    if (letter == '.')
        return counter;
    if (letter == 'a')
        counter++;
    acounter();
}

int main() {
    printf("%d\n", acounter());
}
