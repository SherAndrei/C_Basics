#include <stdio.h>
#include <math.h>

int main() {
    double sum = 1.;
    for (int i = 1; i < 20; i++) {
        sum += pow(-1, i + 1) * (i * 2.) / ((2 * i + 1) * (pow(3, i)));
    }
    printf("%.3f\n", sum);
}

