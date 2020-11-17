#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int IsPrime(int num);           

int main(){

    //Used for a dynamic random update
    srand(time(NULL));

    int x = 0;
    int y = 10000;

    int range_for_rand;
    int min_number_of_range;

    //Finding the range and the min number
    if ( x < y ){
        range_for_rand = y - x + 1;
        min_number_of_range = x;
    }
    else if ( x > y ){
        range_for_rand = x - y + 1;
        min_number_of_range = y;
    }

    //Random number1 
    int num1 = rand() % range_for_rand + min_number_of_range;

    //Random number2
    int num2 = rand() % range_for_rand + min_number_of_range;


    int result1 = IsPrime(num1);
    int result2 = IsPrime(num2);

    return 0;
}

int IsPrime(int num){
    
    int result = 1 ;            //prime

    for(int i = 2 ; i < num / 2 ; i++) {
        if(num % i == 0) {

            result = 0;         //not prime
            break;
        }

    }

    return result;
}