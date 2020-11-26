#include <stdio.h>
#include <stdarg.h>

int amount_of_right_pairs(int numbers, ...) {

    va_list ap;

    int j;
    float res;
    int x1;
    int x2;

    int result = 0;

    va_start(ap,numbers);

    for (j = 0; j < numbers; j++) {
        x1 = va_arg(ap, int);
        j++;
        x2 = va_arg(ap, int);
        if (x1 < x2){
            result += 1;
        }
    }

    va_end(ap);

    return result;
}

int main() {
    
    int pairs = amount_of_right_pairs(10, 1, 2, 4, 3, 6, 7, 2, 4, 4,8);

    return 0;
}