#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CommonDivisor (int n1, int n2);

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

    //Random numbers for division V1
    int n1_1 = rand() % range_for_rand + min_number_of_range;
    int n1_2 = rand() % range_for_rand + min_number_of_range;

    int result1 = CommonDivisor(n1_1,n1_2);

    //Random numbers for division V2
    int n2_1 = rand() % range_for_rand + min_number_of_range;
    int n2_2 = rand() % range_for_rand + min_number_of_range;

    int result2 = CommonDivisor(n2_1,n2_2);

    return 0;
}

int CommonDivisor (int n1, int n2){

    int i;
    int common_div;

    int x = 1;

    do{ //do-while loop

        x++;

        for(i=1; i <= n1 && i <= n2; ++i)
        {
            //Finds the common divisor
            if(n1%i==0 && n2%i==0)
                common_div = i;
        }


    }
    while ( x < 2);

    return common_div;

}