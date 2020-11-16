#include <stdio.h>

#define N 3

int main() {
    int matrixIn[N][N];         //Matrix
    int matrixOut[N][N];        //Result matrix

    //Printing in the elements
    for (int i = 0; i < N; i++) {       
        for (int j = 0; j < N; j++) {
            matrixIn[i][j] = i * N + j;
        }
    }

    //Making the simple matrix multiply process
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrixOut[i][j] = 0;
            for (int k = 0; k < N; k++) {       
                matrixOut[i][j] += matrixIn[i][k] * matrixIn[k][j];
            }
        }
    }

    return 0;
}