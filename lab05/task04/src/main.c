#include <stdio.h>

int main()
{
    int num = 6;                   //Number
    int i = 0, j = 1, k = 1;       //Used in loop
    int sum_of_dividers = 0;       //Initializing sum
    int sum_of_dividers2 = 0;
    int sum_of_dividers3 = 0;

    int perfect;
    int perfect2;
    int perfect3;


    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum_of_dividers += i; //Getting all the i values which suit us and summing them in the result
        }
    }

    if (sum_of_dividers == num){
        perfect = 1; //true
    }
    else{
        perfect = 0; //false
    }




    while ( j < num){
        if (num % j == 0) {
            sum_of_dividers2 += j; //Getting all the i values which suit us and summing them in the result
        }
        j++;
    }

    if (sum_of_dividers2 == num){
        perfect2 = 1; //true
    }
    else{
        perfect2 = 0; //false
    }




    do {
        if (num % k == 0) {
            sum_of_dividers3 += k; //Getting all the i values which suit us and summing them in the result
        }
        k++;
    } while ( k < num);

    if (sum_of_dividers3 == num){
        perfect3 = 1; //true
    }
    else{
        perfect3 = 0; //false
    }



    return 0;
}