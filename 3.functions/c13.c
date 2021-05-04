#include <stdio.h>
#include <math.h>

unsigned long long factorial(unsigned long long n) {
    return (n > 1) ? n * factorial(n - 1) : 1;
}

float cosinus(float x) {
    x = x * (M_PI) / 180;
    float res = 0;
    for (int i = 0; i < 10; i++) {
        res += pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
    }
    return res;
}

int main() {
    int degree;
    scanf("%d", &degree);
    printf("%.3f\n", cosinus(degree));
}