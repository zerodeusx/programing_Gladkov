#include "lib.h"

int size_of_seq(const int* arr) {
    int count = 1;
    for (int i = 0; i < N; i++) {
        while (arr[i] < arr[i + 1]) {
            i++;
        }
        if (arr[i] > arr[i + 1]) {
            i++;
            count++;
        }

    }

    return count;
}

int* max_seq(const int* arr, int count_of_seq) {

    //variables to help us get the max sequence
    int index = 0;
    int count = 1;
    int info_array[count_of_seq * 2];


    for (int i = 0, j = 0; i < N; i++) {

        index = i ;
        while (arr[i] < arr[i + 1]) {
            count++;
            i++;
        }

        if (arr[i] > arr[i + 1]) {         
            info_array[j] = index;
            info_array[j + 1] = count;

            j += 2;

            count = 1;
        }
        else
            i++;
    }

    //temp var, which saves our index
    int temp_count = 0;

    for (int k = 0; k < count_of_seq * 2; k += 2) {
        if (info_array[k + 1] > temp_count) {
            temp_count = info_array[k + 1];
            index = k;
        }
    }

    int result[info_array[index+1]];

    //printing the values to our resulting array
    for (int k = info_array[index], i = 0; k < info_array[index] + info_array[index + 1]; k++, i++) {
        result[i] = arr[k];
    }


    return result;
}