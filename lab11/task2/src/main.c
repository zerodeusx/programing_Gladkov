#include "lib.h"


int main() {

    int sending_arr[N] = { 1,4,-2,3,5,7,-2,12,4,3,-1};
    int count_of_seq = size_of_seq(sending_arr);
    int* result = max_seq(sending_arr, count_of_seq); //getting the result from our function

    return 0;
}


