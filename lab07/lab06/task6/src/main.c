#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 3

void matrix_multiplier(int matrix_for_muliply[N][N]);

int main() {

    srand(time(NULL));

    //Random range
    int x = 9;
    int y = -9;

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

    int matrixIn[N][N];         

    //printing in the elements of the matrix via rand
    for (int i = 0; i < N; i++){                                 
        for (int j = 0; j < N; j++){
            matrixIn[i][j] = rand() % range_for_rand + min_number_of_range;    //random range from -9 to 9
        }

    }

    matrix_multiplier(matrixIn);

    int matrixIn2[N][N];

    //printing in the elements of the matrix via rand
    for (int i = 0; i < N; i++){                                  
        for (int j = 0; j < N; j++){
            matrixIn2[i][j] = rand() % range_for_rand + min_number_of_range;    //random range from -9 to 9
        }

    }

    matrix_multiplier(matrixIn2);

    return 0;
}

void matrix_multiplier(int matrix_for_muliply[N][N]){

    int matrixOut[N][N];

    //Making the simple matrix multiply process
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrixOut[i][j] = 0;
            for (int k = 0; k < N; k++) {       
                matrixOut[i][j] += matrix_for_muliply[i][k] * matrix_for_muliply[k][j];
            }
        }
    }

}