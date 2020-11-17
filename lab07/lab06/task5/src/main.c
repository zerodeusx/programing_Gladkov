#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

void matrix_shifter(int arrayIn[N][N]);

int main() {

    //Used for a dynamic random update
    srand(time(NULL));

    //Random range
    int x = 0;
    int y = 10000;

    int range_for_rand;
    int min_number_of_range;

    //Finding the range and the min number
    if ( x < y ){
        range_for_rand = y - x;
        min_number_of_range = x;
    }
    else if ( x > y ){
        range_for_rand = x - y;
        min_number_of_range = y;
    }


    int arrayIn[N][N];  //first array

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            arrayIn[i][j] = rand() % range_for_rand + min_number_of_range;    //random range from -9 to 9
        }

    }

    int arrayIn2[N][N]; //second array

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            arrayIn2[i][j] = rand() % range_for_rand + min_number_of_range;    //random range from -9 to 9
        }

    }

    matrix_shifter(arrayIn);
    matrix_shifter(arrayIn2);

    return 0;
}

void matrix_shifter(int arrayIn[N][N]){

    for (int i = 0; i < N; i++) {           //going thorugh matrix
        int k = arrayIn[i][0];
        for (int j = 0; j < N; j++) {       //making the shift
            arrayIn[i][j] = arrayIn[i][j + 1];
        }
        arrayIn[i][N - 1] = k;
    }

}