#include <stdio.h>

long long factorial(int n) {
    long long res = 1;
    int i;
    for (i = 2; i <= n; i++) {
        res = res * i;
    }
    return res;
}
double sum_fact(double a, double b) {
    int x = (int)a;
    int y = (int)b;
    return factorial(x) + factorial(y);
}
int main(void) {
    double a, b;
    printf("Вводите два числа (Ctrl+D для выхода):\n");
    while (scanf("%lf %lf", &a, &b) == 2) {
        printf("Результат: %.4f\n", sum_fact(a, b));
    }
    return 0;
}
