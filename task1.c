#include <stdio.h>

int main(void) {
    int c;
    while ((c = getchar()) != EOF) {
        c == '\n' ? (putchar('\\'), putchar('n')) : putchar(c);
    }
    return 0;
}
