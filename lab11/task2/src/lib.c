#include "lib.h"

int size_of_seq(const int* arr) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        while (arr[i] > 0) {
            i++;
        }
        if (arr[i] < 0 && arr[i - 1] > 0) {
            i++;
            count++; //counts the size
        }

    }

    return count;
}

int* max_seq(const int* arr, int count_of_seq) {

	//variables to help "shift" and index our points
    int index = 0;
    int sum = 0;
    int count = 0;
    int* info_array = (int*)malloc(count_of_seq * 3 * sizeof(int)); //making the resulting array


    for (int i = 0, j = 0; i < N; i++) {

        index = i;
        while (arr[i] > 0) {
            sum += arr[i];
            count++;
            i++;
        }

        if (arr[i] < 0 && arr[i - 1] > 0) {
            info_array[j] = index;
            info_array[j + 1] = count;
            info_array[j + 2] = sum;

            j += 3;
            index = count = sum = 0;
        }
        else
            i++;
    }
    
    int temp_sum = 0;

    for (int k = 0; k < count_of_seq * 3; k+=3) {
        if (info_array[k + 2] > temp_sum) {
            temp_sum = info_array[k + 2];
            index = k;
        }
    }

    int* result = (int*)malloc(info_array[index + 1] * sizeof(int));

    //printing in the valus to our result array
    for (int k = info_array[index], i = 0; k < info_array[index] + info_array[index + 1]; k++, i++) {
        result[i] = arr[k];
    }

    return result;
}