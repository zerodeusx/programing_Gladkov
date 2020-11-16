#include <stdio.h>
#define N 3

int main() {
	int arrayIn[N][N];
	for (int i = 0; i < N; i++) {			//going through array's elements
		for (int j = 0;j < N; j++) {
			arrayIn[i][j] = i * N + j;
		}
	}
	for (int i = 0; i < N; i++) {			//going thorugh matrix
		int k = arrayIn[i][0];
		for (int j = 0; j < N; j++) {		//making the shift
			arrayIn[i][j] = arrayIn[i][j + 1]; 
		}
		arrayIn[i][N - 1] = k;				
	}
	return 0;
}
