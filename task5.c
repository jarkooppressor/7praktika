#include <stdio.h>

long long summa(int n) {
    if (n <= 0)
        return 0;
    return n * n + summa(n - 1);
}

long long sum(int n) {
    long long s = 0;
    int i;
    for (i = 1; i <= n; i++) {
        s = s + i * i;
    }
    return s;
}

int main(void) {
    int n;
    printf("Введите n: ");
    scanf("%d", &n);
    printf("Рекурсия: %lld\n", summa(n));
    printf("Цикл: %lld\n", sum(n));
    return 0;
}