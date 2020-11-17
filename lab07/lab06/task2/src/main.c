#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define start 1         //start of range
#define LEN 100         //array length 

void prime_array(int prime[], int end);

int main() {

    //Used for a dynamic random update
    srand(time(NULL));

    //random range
    int x = 200;
    int y = 300;

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

    int end_of_range = rand() % range_for_rand + min_number_of_range;   //first end of range

    int end_of_range2 = rand() % range_for_rand + min_number_of_range;  //second end of range

    //Initializing the array
    int prime[LEN] = {0};     

    prime_array(prime,end_of_range);
    prime_array(prime,end_of_range2);
    return 0;
}

void prime_array(int prime[],int end){
    int j = 0;
    for (int diap = start; diap < end; diap++ ) {   //Loop for fiding is the number prime or not
        int flag = 0;
        for (int i = 2; i < diap; i++) {            //Isn't prime, since the number can be divided by a different number
            if (diap % i == 0) {
                flag = 0; //false
                break;
            } else {
                flag = 1; //true
            }
        }
        if (flag == 1) {
            prime[j] = diap;                        //Printing the number in the array, if it's prime
            j++;
        }
    }

}