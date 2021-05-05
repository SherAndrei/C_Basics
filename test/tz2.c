#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int zhuk = 6, pauk = 8;
    int rem = 0;
    int counter = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i * pauk + j * zhuk == N)
                counter++;
        }
    }

    printf("%d\n", counter);
}
