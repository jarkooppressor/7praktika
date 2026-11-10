#include <stdio.h>

int main(void) {
    int c;
    int total = 0;
    int count = 0;
    int state = 0; 

    while ((c = getchar()) != EOF) {
        total++;
        count += (state == 3 && c == 'n');
        state = (c == 't') ? 1 :
                (c == 'i' && state == 1) ? 2 :
                (c == 'o' && state == 2) ? 3 : 0;
    }
    printf("Вхождений \"tion\": %d\n", count);
    printf("Всего символов: %d\n", total);
    return 0;
} 
       
/* в цикле вычисляем следующее состояние на основе текущего и нового символа.
 * если дошли до состояния 3 и пришла 'n', выражение (state == 3 && c == 'n') вернет 1, иначе 0. */