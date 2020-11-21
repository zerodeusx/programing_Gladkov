#include <stdio.h>
int main() {
    int num = 33; //num
    int result1, result2, result3;
    int j = 2;
    int y = 2;

    for(int i=2 ; i < num/2 ; i++) {
        if(num%i == 0) {

            result1 = 0;   //not prime
            break;
        }
        else{
            result1 = 1;
        }
    }

    while ( j < num/2 ){
        if(num%j == 0) {

            result2 = 0;   //not prime
            break;
        }
        else{
            result2 = 1;
        }

        j++;
    }
    do {
        if(num%y == 0) {

            result3 = 0;   //not prime
            break;
        }
        else{
            result3 = 1;
        }
        y++;
    }
    while( y < num/2);

    if (num <= 2 && num > 0){
        result1 = 1;
        result2 = 1;
        result3 = 1;
    }

    
}