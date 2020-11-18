#include <stdio.h>

int main()
{
    int num = 6;                   //Number
    int i;                         //Used in loop
    int sum_of_dividers = 0;       //Initializing sum

    int perfect;


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


    return 0;
}