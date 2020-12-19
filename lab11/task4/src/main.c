//*Дано масив з N*N цілих чиселю Елементи головної діагоналі записати в одномірний масив, отриманий масив упорядкувати за зростанням*/

#include "lib.h"

int main() {
	int** matrix = (int**)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		*(matrix + i) = (int*)malloc(N * sizeof(int));
	}
	fillMatrix(matrix);

	int* mainDiag = (int*)malloc(N * sizeof(int));

	fillOneDimArray(matrix, mainDiag);

	sortArray(mainDiag);

	return 0;
}