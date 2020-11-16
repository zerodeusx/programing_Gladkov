#include <stdio.h>
int main() {
    int num = 33, flag = 0;
    for(int i=2 ; i < num/2 ; i++) {
        if(num%i == 0) {

            int result = 0;   //not prime
            break;
        }
    }
    if(flag == 0) {
        int result = 1;       //prime
    }
}