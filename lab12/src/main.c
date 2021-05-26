/**
 * @mainpage
 * # Загальне завдання
 * 1. **Зробити** програму з показчиками
 *
 * 2. **Визначити** чи є в масиви елементи, що повторюються, якщо є, то створити масив, в якому вказати скiльки разiв якi елементи повторюються.
 *
 * 3. **Добавити I/O до **
 *
 * @author Gladkov K.
 * @date 11-jan-2020
 * @version 1.0
 */

/**
* @file main.c
* @brief Файл з main, який також викликае функцii
*
* @author Gladkov K.
* @date 11-jan-2020
* @version 1.0
*/

#include "lib.h"

int main() {

    printf("Program was made by Gladkov Kostyantyn for 12th lab work which is about interaction with user (I/O).\n");

    char expectation;
    printf("\nWhat are your expectations for this program from 1 to 9: ");
    expectation = getc(stdin);
    printf("Number entered: ");
    putc(expectation, stdout);
    printf("\n");

    //Initializing array
    int main_arr[N] = {0};

    printf("Enter the matrix elements (%d elements): \n", N);
    for (int i = 0; i < N; i ++){
        scanf("%d", &main_arr[i]);
    }

    int array_size = size(main_arr);

    counter(array_size, main_arr);
    qna();

    //_CrtDumpMemoryLeaks();
    return 0;
}