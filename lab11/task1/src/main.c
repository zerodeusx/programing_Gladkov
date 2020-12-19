/**
 * @mainpage
 * # Загальне завдання
 * 1. **Зробити** програму з показчиками
 *
 * 2. **Визначити** чи є в масиви елементи, що повторюються, якщо є, то створити масив, в якому вказати скiльки разiв якi елементи повторюються.
 *
 * @author Gladkov K.
 * @date 09-dec-2020
 * @version 1.0
 */
 
 /**
 * @file main.c
 * @brief Файл з main, який також викликае функцii
 * 
 * @author Gladkov K.
 * @date 09-dec-2020
 * @version 1.0
 */

#include "lib.h"

int main() {

    //Initializing array
    int main_arr[N] = { 1, 1, 6, 3, 6, 1 };

    int sizeResult = size(main_arr)*2;
    int* main_result = counter(main_arr);

    return 0;
}

