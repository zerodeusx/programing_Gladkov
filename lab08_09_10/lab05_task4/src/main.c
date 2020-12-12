#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PerfectNumber(int function_num);

int main(){

    //Used for a dynamic random update
    srand(time(NULL));

    int x = 0;
    int y = 9000;

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

    //Potential lucky number N1
    int num1 = rand() % range_for_rand + min_number_of_range;

    //Potential lucky number N2
    int num2 = rand() % range_for_rand + min_number_of_range;
    

    int result1 = PerfectNumber(num1);
    int result2 = PerfectNumber(num2);
    
    return 0;
}

int PerfectNumber(int function_num){

    int i;
    int sum_of_dividers = 0;       //Initializing sum

    int perfect;


    for (i = 1; i < function_num; i++) {
        if (function_num % i == 0) {
            sum_of_dividers += i; //Getting all the i values which suit us and summing them in the result
        }
    }

    if (sum_of_dividers == function_num){
        perfect = 1; //true
    }
    else{
        perfect = 0; //false
    }
    
    return perfect;

}