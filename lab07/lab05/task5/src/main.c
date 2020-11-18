#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RootFinder(int num);

int main(){

    //Used for a dynamic random update
    srand(time(NULL));

    int x = 0;
    int y = 10;

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

    //First number for finding root
    int num1 = rand() % range_for_rand + min_number_of_range;

    //Second number fo finding root
    int num2 = rand() % range_for_rand + min_number_of_range;

    int result1 = RootFinder(num1);
    int result2 = RootFinder(num2);
    return 0;
}

int RootFinder(int num){
    int temp = 0;
    int root = 1;                           //Initializing root
    int i;


    //finding root if it is possible, if not root stays 1 before the 23rd line
    for (i = 1; i < num; i ++) {
        temp = i * i;           //getting the square
        if (temp == num) {      //if square equals to number
            root = temp / i;
            break;
        }
        else if ( temp > num ){  //if temp (square) goes bigger than num
            break;
        }
    }

    if ((root*root) != num){
        root = 0; //cant calculate
    }

    int result = root;

    return result;

}