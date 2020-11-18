#include <stdio.h>

int main() {

    int k = 7;
    int m = 4;
    int n = 1;

    int temp;


    //Алгорифм, схожий на сортування бульбашкою

    if (k > n) {
        temp = k;
        k = n;
        n = temp;
    }
    if (k > m) {
        temp = k;
        k = m;
        m = temp;
    }
    if (m > n) {
        temp = m;
        m = n;
        n = temp;
    }
    
    return 0;
}
