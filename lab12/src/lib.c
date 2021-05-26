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
            arrRes[count] = *(arr+i);
            arrRes[count + 1] = countOfSought;
            count += 2;
        }
        *(arr+i) = -1;
        countOfSought = 1;
    }

    printf("\nYour result is: ");
    for (int i = 0; i < size * 2; i++){
        if(i % 2 == 0){
            printf("\n");
        }
        printf("%d ",arrRes[i]);
    }

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

void qna(){

    char full_name[50];
    gets(full_name);

    puts("\n\nEnter your full name please: ");
    gets(full_name);

    printf("%s, the program has ended.\n", full_name);

    write(1,"Were your expectations real? y/n: ",35); // 1 - файловый дескриптор, в нашем случае означающий вывод на консоль, 0 - для ввода, 2 - для ошибки

    char user_expec_answer[1];
    read(0,user_expec_answer,1);

    if (user_expec_answer[0] == 121 || user_expec_answer[0] == 89){
        printf("\nI'm happy to hear that!");
    }
    else if (user_expec_answer[0] == 110 || user_expec_answer[0] == 78){
        printf("\nLet's hope for the best next time!");
    }
    else {
        printf("You entered a wrong input, the program exits!");
        exit(1);
    }

    printf("\n\nThanks for your answer!");
}

