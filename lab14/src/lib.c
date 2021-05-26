/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 *
 * @author Gladkov K.
 * @date 11-jan-2020
 * @version 1.0
 */

#include "lib.h"

void counter(int size, int* arr) {
    int countOfSought = 1;
    int count = 0;

    int* arrRes = (int*)malloc(size * 2 * sizeof(int));

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (*(arr+i) == *(arr+j) && *(arr+i) != -1) {
                *(arr+j) = -1;
                countOfSought++;
            }
        }

        if (*(arr+i) != -1) {
            *(arrRes + count) = *(arr+i);
            *(arrRes + count + 1) = countOfSought;
            count += 2;
        }
        *(arr+i) = -1;
        countOfSought = 1;
    }

    printf("\nYour result is: \n");

    for (int i = 0; i < size * 2; i++){
        if ( i != 0 && i % 2 == 0){
            printf("\n");
        }
        printf("%d ", *(arrRes + i));
    }

    int* copied_arr = (int*)malloc(size * 2 * sizeof(int));

    for (int i = 0; i < size * 2; i++){
        *(copied_arr + i) = *(arrRes + i);
    }

    write_to_user_file(copied_arr, size * 2);

    free(copied_arr);
    free(arrRes);
}

int size(int* arr) {
    int tmp[N];
    int sizeResult = 0;

    for (int k = 0; k < N; k++) {
        tmp[k] = *(arr + k);
    }

    //the amount is being count here
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (tmp[i] == tmp[j] && tmp[i] != -1) {
                tmp[j] = -1;
            }
        }
        if (tmp[i] != -1) {
            sizeResult++;
            tmp[i] = 1;
        }

    }

    return sizeResult;
}

void read_from_user_file(int* user_temp_array){

    char path_to_input_file[50];
    printf("\nPlease enter the full path to your file, the file must have %d numbers on one line separated with comas: ", N);
    scanf("%s", path_to_input_file);
    FILE* user_input_file = NULL;

    if ((user_input_file = fopen (path_to_input_file, "r")) == NULL) {
        perror ("Failed to open file, program will exit");
        exit(1);
    }

    char temp_string_arr[N * 2 + 1];
    fscanf(user_input_file, "%s", temp_string_arr);
    printf("Your file input is: %s",temp_string_arr);

    char* remove_symbol;
    remove_symbol = strtok(temp_string_arr, ",");

    int i = 0;
    while (remove_symbol != NULL){
        *(user_temp_array + i) = atoi(remove_symbol);
        remove_symbol = strtok(NULL, ",");
        i++;
    }

    printf("\n");

    fclose(user_input_file);
}

void write_to_user_file(int* resulting_arr, int size){
    FILE* user_output_file = NULL;

    char path_to_output_file[50];
    printf("\n\nPlease enter the full path where you want to write the file: ");
    scanf("%s", path_to_output_file);

    user_output_file = fopen(path_to_output_file, "w");

    fputs("This is your result:\n", user_output_file);
    for (int i = 0; i < size; i++){
        if ( i != 0 && i % 2 == 0){
            fprintf(user_output_file, "%c", 10);
        }
        fprintf(user_output_file, "%d ", *(resulting_arr + i));
    }

    printf("\nYour result was written to your file!\n");

    fclose(user_output_file);
}