#include <stdio.h>

unsigned long long factorial(unsigned long long n) {
    return (n > 1) ? n * factorial(n - 1) : 1;
}

int main() {
    unsigned long long num;
    scanf("%llu", &num);
    printf("%llu\n", factorial(num));
}
