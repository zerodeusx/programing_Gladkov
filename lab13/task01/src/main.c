/**
 * @mainpage
 * # Загальне завдання
 * Дано масив з N цiлих чисел. **Визначити**, чи є в масивi елементи, що повторюються;якщо такi є, то створити масив, в якому вказати скiльки разiв якi елементи повторюються. Таким чином в результуючому масивi кожен непарный елемент - число, що повторюються; кожен парний елемент - кiлькiсть повторювань.
 *
 * @author Gladkov K.
 * @date 13-dec-2020
 * @version 1.0
 */
 
 /**
 * @file main.c
 * @brief Файл з main, який також викликае функцii
 * 
 * @author Gladkov K.
 * @date 13-dec-2020
 * @version 1.0
 */

#include "lib.h"

int main() {


    //our text
    char text[] = "hello guys and everyone else";

    //empty array
    char tmp[29] = "";
    //copying the text to our temp (so the text didnt get changed)
    strcat(tmp, text);

    //spacer we want to remove
    char spacer[] = " ";
    int amount_of_words = size_counter(tmp);

    int count = 0;

    //making an array
    char** arr = (char**)malloc(amount_of_words * sizeof(int));

    //making it a 2d array
    for (int i = 0; i < amount_of_words; i++)
        arr[i] = (char*)malloc(30 * sizeof(char));

    char* res = strtok(text, spacer);
    while (res) {

        strcpy(arr[count], res);
        count++;

        res = strtok(NULL, spacer);
    }


    char temp[30];


    //here the make a "bubble sort", but with words
    for (int i = 0; i < amount_of_words-1; i++) {
        for (int j = 0; j < amount_of_words-i-1; j++) {
            if (arr[j][0] > arr[j + 1][0]) {
                strcpy(temp, arr[j + 1]);
                strcpy(arr[j + 1], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }

    //printing out the words
    for (int j = 0; j < amount_of_words; j++) {
        printf("%s ", arr[j]);
    }

    return 0;
}

