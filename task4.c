#include <stdio.h>

void change(double *a, double *b, double *c) {
    *b = *a;
    *c = *a;
}
int main(void) {
    double x = 5.5;
    double y = 10.0;
    double z = 15.5;
    printf("До:  x=%.1f  y=%.1f  z=%.1f\n", x, y, z);
    change(&x, &y, &z);
    printf("После: x=%.1f  y=%.1f  z=%.1f\n", x, y, z);
    return 0;
}